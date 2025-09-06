#include <iostream>
using namespace std;

int dp[21];    // 20번째 피보나치 수는 정수 범위를 넘지 않는 값임
int getFibonacci(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if (dp[n] != 0)    // 이미 계산된 값일 경우 바로 리턴하기 위함 (재귀 횟수 최소화)
		return dp[n];
	return dp[n] = getFibonacci(n-2) + getFibonacci(n-1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	cout << getFibonacci(n);

	return 0;
}