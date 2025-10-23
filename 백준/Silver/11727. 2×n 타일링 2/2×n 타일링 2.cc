#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

/*
dp[0] = 0
dp[1] = 1
dp[2] = 3
dp[3] = dp[1] * 2 + dp[2] = 2+3 = 5
dp[n] = dp[n-2] * 2 + dp[n-1]

dp[n-2]에 2를 곱하는 이유는, dp[n-2]가 뒤에 2x2짜리 직사각형 하나가 더해진다고 생각하고 n-2까지의 경우의 수를 세는 것이므로
2x2 블럭을 채우는 방법은 2x1을 2개 쓰거나, 2x2타일 1개를 쓰는 방법이 있다. 따라서, 2를 곱해서 나타낸다.
*/
int main() {
	fastio;

	int dp[1001];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 3;

	int n; cin >> n;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

	cout << dp[n] << '\n';

	return 0;
}