// 큐를 이용
#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> qu;

	for (int i = 1; i <= N; i++)
		qu.push(i);

	cout << '<';
	for (int cnt = 0; cnt < N; cnt++) {
		for (int t = 1; t <= K - 1; t++) {    // 첫번째 요소부터 K-1개의 요소를 queue의 뒤쪽으로 옮기기
			qu.push(qu.front());
			qu.pop();
		}
		if (cnt > 0) cout << ", ";
		cout << qu.front();
		qu.pop();
	}
	cout << '>';

	return 0;
}


/* 벡터를 이용
// 지금 위치에서 K번째를 찾으려면 앞으로 K-1칸 가야 함
// % v.size() : 배열 끝을 넘어가면 다시 맨 앞으로 돌아감
// 즉, (idx + K - 1) % v.size() : 원형 배열에서 K번째를 선택하는 공식
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<int> v;
	for (int i = 1; i <= N; i++)
		v.push_back(i);

	cout << "<";
	int idx = 0;
	while (!v.empty()) {    // 벡터가 모두 비워질때까지 반복
		idx = (idx + K - 1) % v.size();
		cout << v[idx];
		v.erase(v.begin() + idx);    // v.erase()를 이용 (삭제한 요소의 뒤쪽 모든 요소가 땡겨지게 됨)

		if (!v.empty())
			cout << ", ";
	}
	cout << ">\n";

	return 0;
}
*/

/* 리스트를 이용
#include <iostream>
#include <list>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	list<int> L;
	for (int i = 1; i <= N; i++)
		L.push_back(i);

	auto it = L.begin();    // 시작 이터레이터
	cout << "<";

	while (!L.empty()) {
		// 현재 위치에서 K-1만큼 이동 (원형 특성 구현)
		for (int j = 1; j < K; j++) {
			it++;    // 이터레이터 이동 (++연산)
			if (it == L.end())
				it = L.begin();
		}
		cout << *it;    // 이터레이터 위치의 요소 출력
		it = L.erase(it);    // it가 가리키는 원소를 제거하고, erase는 삭제 위치의 다음 iterator를 반환

		if (it == L.end())    // 삭제한 요소가 맨 마지막 요소인 경우
			it = L.begin();
		if (!L.empty())
			cout << ", ";
	}
	cout << ">\n";

	return 0;
}
*/