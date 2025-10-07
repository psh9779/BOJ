#include <iostream>
#include <algorithm>    // max()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	int N; cin >> N;    // N은 계단의 개수. 300이하의 자연수
	
	int stairs[301] = { 0 };
	for (int i = 1; i <= N; i++)
		cin >> stairs[i];

	int dp[301] = {};
	dp[0] = 0;
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];

	// 두칸 전에서 한칸 건너뛰고 올라오는 경우, 세칸 전에서 한칸 건너뛰고 두칸 연달아 올라오는 경우를 모두 고려 (핵심 로직)
	for (int j = 3; j <= N; j++)
		dp[j] = max(dp[j - 2] + stairs[j], dp[j - 3] + stairs[j-1] + stairs[j]);

	cout << dp[N] << '\n';

	return 0;
}