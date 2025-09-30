// 투 포인터 이용
#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, M;
	cin >> N >> M;
	vector<int> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int count = 0;
	int i = 0;
	int j = N - 1;

	// N개 중 서로 다른 2개의 합을 구하기에 i와 j는 같을 수 없음.
	// 벡터 v는 오름차순 정렬된 상태 -> 투 포인터 이동 원칙에 따라 코딩
	// 투 포인터 탐색 시간 : O(N)
	while (i < j) {
		if (v[i] + v[j] < M) {
			i++;
		}
		else if (v[i] + v[j] > M) {
			j--;
		}
		else {    // v[i] + v[j] == M인 경우
			count++;
			i++;
			j--;
		}
	}
	cout << count << '\n';

	return 0;
}





/* 통과된 다른 코드 (but, 투포인터 방식이 더 널널히 통과하는 전략임)
#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

// N개의 재료 중 2개의 자료의 번호 합이 M이 되면 갑옷을 만들 수 있음
// M은 1 이상 천만 이하의 자연수, N개의 재료의 각 번호는 10만 이하의 자연수
// 갑옷을 만들 수 있는 개수 출력
int main() {
	fastio;

	int N, M;
	cin >> N >> M;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];    // 고유한 번호(중복 X) 입력

	sort(v.begin(), v.end());

	int res = 0;

	// nC2회의 연산 -> 최악의 경우 약 1.2억 정도의 연산 (2초 제한 내에 가능)
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (v[i] + v[j] == M) {
				res++;
				break;
			}
			else if (v[i] + v[j] > M)
				break;
		}
	}
	cout << res << '\n';

	return 0;
}
 */