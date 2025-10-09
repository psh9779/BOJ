#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int dp[1500002];    // dp[i]는 i일에 받을 수 있는 금액의 최댓값을 기록한 배열.
vector<pair<int, int>> v;
int main() {
	fastio;

	int N; cin >> N;
	v.resize(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> v[i].first >> v[i].second;

	for (int i = 1; i <= N; i++) {
		// 현재까지의 최대 수익 유지 (dp[N+1]의 값이 N+1일째 되는 날 퇴사할 때 받는 금액의 최댓값이 됨)
		// dp[1]은 1일차에 받을 수 있는 금액의 최댓값. 최소 2일차부터 수익이 발생 가능하므로 dp[1] = 0임은 자명
		dp[i+1] = max(dp[i+1], dp[i]);

		// 상담을 할 수 있다면 수익 계산
		if (i + v[i].first <= N + 1)
			dp[i + v[i].first] = max(dp[i + v[i].first], dp[i] + v[i].second);
	}
	cout << dp[N + 1] << '\n';

	return 0;
}