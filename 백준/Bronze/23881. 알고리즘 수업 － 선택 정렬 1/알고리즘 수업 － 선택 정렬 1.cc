#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int A[10001];

int main() {
	fastio;
	int N, K; cin >> N >> K;

	for (int i = 1; i <= N; i++)
		cin >> A[i];

	int ch_cnt = 0;
	for (int last = N; last >= 2; last--) {
		int max_idx = 1;
		for (int i = 1; i <= last; i++) {
			if (A[max_idx] < A[i])
				max_idx = i;
		}
		if (max_idx != last) {
			int temp = A[last];
			A[last] = A[max_idx];
			A[max_idx] = temp;

			ch_cnt++;
			if (ch_cnt == K) {
				// K번째 교환되는 두 수를 작은 수부터 출력해야하므로 교환 후의 값으로 출력
				cout << A[max_idx] << ' ' << A[last] << '\n';
				break;
			}
		}
	}
	if (ch_cnt < K)
		cout << -1 << '\n';

	return 0;
}