#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	cout << (N % 2 ? "SK\n" : "CY\n");

	return 0;
}

/* DP를 이용한 풀이
// 완벽한 게임 == 턴이 최소한으로 돌아가는 것이라고 생각
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int dp[1001];    // 돌 개수 N이 주어졌을 때, 최소한의 턴 개수 저장
	dp[1] = 1;    // 상근1
	dp[2] = 2;    // 상근1, 창영1
	dp[3] = 1;    // 상근3
	for (int i = 4; i <= N; i++)
		dp[i] = min(dp[i - 1] + 1, dp[i - 3] + 1);    // i-1개의 상황에서 1을 취하는 턴을 추가하거나, i-3개의 상화에서 3을 취하는 턴을 취하는 것 중 최소 턴 선택

	// 턴의 수가 홀수이면 상근이 승, 짝수이면 창영이 승
	if (dp[N] % 2)
		cout << "SK\n";
	else
		cout << "CY\n";

	return 0;
}
*/
