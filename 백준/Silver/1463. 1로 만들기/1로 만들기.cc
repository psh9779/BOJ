#include <iostream>
using namespace std;

// 연산 횟수의 최솟값 저장 (d[i] == i에서 1이 되는데까지 최소 연산 횟수)
int dp[1000001];    // 스택 오버플로우 방지를 위해 전역으로 선언

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1이상, 100만 이하의 정수
	
	dp[1] = 0;    // N이 1이면 최소 연산 횟수는 0 (이미 1이 만들어져있으므로)
	
	for (int i = 2; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;    // 기본 -1 연산 수행
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);    // 이때, min()내에서의 dp[i]값은 -1연산과 /2연산 중에서의 최소 연산횟수임 -> 따라서, 조건문의 순서는 상관이 없음
	}
	cout << dp[N] << '\n';

	return 0;
}