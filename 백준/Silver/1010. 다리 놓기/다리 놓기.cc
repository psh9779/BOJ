#include <iostream>
using namespace std;

// DP의 메모이제이션을 활용한 풀이
int dp[30][30];
int returnCombination(int n, int r) {
	if (n == r || r == 0)
		return 1;
	if (dp[n][r] != 0)    // dp[n][r]이 처음 등장한 경우
		return dp[n][r];
	return dp[n][r] = returnCombination(n - 1, r) + returnCombination(n - 1, r - 1);    // 할당과 동시에 리턴
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, N, M;
	cin >> T;

	for (int cnt = 0; cnt < T; cnt++) {
		// nCr == n-1Cr + n-1Cr-1
		cin >> N >> M;    // 0 < N <= M < 30인 정수 N,M이 입력이 됨
		cout << returnCombination(M, N) << '\n';    // MCN의 값 구하기
	}

	return 0;
}