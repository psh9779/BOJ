#include <iostream>
#include <queue>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;
		queue<pair<int,int>> qu;    // '중요도' 및 '위치(인덱스)'를 저장
		priority_queue<int> pq;    // 디폴트로 최대 힙 -> 가장 큰 값이 top()에 옴 (중복을 허용하여 저장됨)

		for (int i = 0; i < N; i++) {
			int pr;
			cin >> pr;
			qu.push({pr, i});
			pq.push(pr);
		}

		int order = 0;
		while (!qu.empty()) {
			int pr = qu.front().first;
			int index = qu.front().second;
			qu.pop();
			
			if (pq.top() == pr) {
				pq.pop();
				order++;    // priority queue의 top()에 위치한 중요도와 같으면 queue에 다시 push하지 않으므로 순서 + 1
				if (index == M) {
					cout << order << '\n';
					break;
				}
			}
			else {
				qu.push({ pr, index });    // 중요도 낮으면 뒤로 보내기
			}
		}
	}

	return 0;
}





/* priority_queue 없이 vector + sort()로 구현한 코드
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>    // sort()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;

		queue<pair<int, int>> qu;
		vector<int> priorities;

		for (int i = 0; i < N; i++) {
			int pr;
			cin >> pr;
			qu.push({ pr, i });
			priorities.push_back(pr);
		}

		// 중요도를 저장한 벡터를 내림차순 정렬 (커스텀 함수 greater<>()을 사용해도 됨)
		sort(priorities.rbegin(), priorities.rend());

		int current = 0;    // 중요도를 저장할 벡터에서 현재 확인할 최대 중요도 인덱스
		int order = 0;    // target이 인쇄될 순서
		while (!qu.empty()) {
			int pr = qu.front().first;
			int idx = qu.front().second;
			qu.pop();

			if (pr == priorities[current]) {
				current++;    // 다음 높은 중요도로 이동
				order++;
				if (idx == M) {
					cout << order << '\n';
					break;
				}
			}
			else {
				qu.push({ pr, idx });    // 가장 높은 중요도가 아니면 뒤로 보내기
			}
		}
	}

	return 0;
}
*/