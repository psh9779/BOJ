#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	
	int dp[12] = {};
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 11; i++)
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];

	int T; cin >> T;
	while (T--) {
		int n;
		cin >> n;
		cout << dp[n] << '\n';
	}

	return 0;
}