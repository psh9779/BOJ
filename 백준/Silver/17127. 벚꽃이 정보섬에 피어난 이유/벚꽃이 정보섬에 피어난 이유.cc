#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	int max_n = 0;

	int temp1 = 1;
	for (int i = 0; i < N - 3; i++) {
		temp1 *= v[i];
		int temp2 = 1;
		for (int j = i + 1; j < N - 2; j++) {
			temp2 *= v[j];
			int temp3 = 1;
			for (int k = j + 1; k < N - 1; k++) {
				temp3 *= v[k];
				int temp4 = 1;
				for (int t = k + 1; t < N; t++) {
					temp4 *= v[t];
				}
				if (max_n < temp1 + temp2 + temp3 + temp4)
					max_n = temp1 + temp2 + temp3 + temp4;
			}
		}
	}
	cout << max_n << '\n';

	return 0;
}





/* 누적곱을 이용한 방식 (반복 곱 계산을 더 줄인 방식)
#include <iostream>
#include <vector>
#include <algorithm>    // max()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++) cin >> v[i];

	// 누적 곱(prefix product) 배열 생성
	vector<long long> prefix(N);
	prefix[0] = v[0];
	for (int i = 1; i < N; i++)
		prefix[i] = prefix[i - 1] * v[i];

	long long ans = 0;

	for (int i = 0; i < N - 3; i++) {
		for (int j = i + 1; j < N - 2; j++) {
			for (int k = j + 1; k < N - 1; k++) {
				for (int t = k + 1; t < N; t++) {
					long long p1 = prefix[i];
					long long p2 = prefix[j] / prefix[i];
					long long p3 = prefix[k] / prefix[j];
					long long p4 = prefix[t] / prefix[k];
					ans = max(ans, p1 + p2 + p3 + p4);
				}
			}
		}
	}
	cout << ans << '\n';

	return 0;
}
*/
