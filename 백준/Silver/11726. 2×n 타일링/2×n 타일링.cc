#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

/*
n = 1일 때 1x1로만 채워야 함
n = 2일 때 1x1을 2개 세우거나, 2x2로만 채움
n = 3일 때 1x1을 3개 세우거나, 1x1을 1개 2x2를 1개로 순서 바꿔서 채움
즉, dp[n] = dp[n-1] + dp[n-2]
	dp[n-1]의 의미는 뒤에 1x1로 미리 하나 채운다고 생각하고 n-1까지 채운 경우의 수
	dp[n-2]의 의미는 마지막에 2x2로 미리 하나 채운다고 생각하고 n-2까지 채운 경우의 수
*/
int main() {
	fastio;

	int dp[1001];
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;

	int n; cin >> n;
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;

	cout << dp[n] << '\n';

	return 0;
}