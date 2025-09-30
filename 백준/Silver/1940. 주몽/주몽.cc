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
	for (int i = 0; i < N-1; i++) {
		for (int j = i+1; j < N; j++) {
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