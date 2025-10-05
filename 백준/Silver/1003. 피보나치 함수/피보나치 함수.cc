#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
	fastio;

	int dp0[41] = { 1, 0 };
	int dp1[41] = { 0, 1 };
	for (int i = 2; i <= 40; i++) {
		dp0[i] = dp0[i - 1] + dp0[i - 2];    // i의 0의 개수는 i-1의 0 개수 + i-2의 0 개수
		dp1[i] = dp1[i - 1] + dp1[i - 2];    // i의 1의 개수는 i-1의 1 개수 + i-2의 1 개수
	}

	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		cout << dp0[N] << ' ' << dp1[N] << '\n';
	}

	return 0;
}