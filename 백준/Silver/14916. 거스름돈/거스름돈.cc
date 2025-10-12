#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int dp[100001];
int main() {
	fastio;
	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = -1;    // 항상 거슬러 줄 수 없는 경우를 고려하기 위함

		if (i >= 2 && dp[i - 2] != -1)
			dp[i] = dp[i - 2] + 1;

		if (i >= 5 && dp[i - 5] != -1) {
			if (dp[i] != -1)    // 즉, 위에서 dp[i-2] != -1이어서 dp[i]가 이미 계산된 경우
				dp[i] = min(dp[i], dp[i - 5] + 1);
			else
				dp[i] = dp[i - 5] + 1;
		}
	}
	cout << dp[n] << '\n';

	return 0;
}