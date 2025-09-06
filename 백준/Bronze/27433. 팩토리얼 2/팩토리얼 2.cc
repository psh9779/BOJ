#include <iostream>
using namespace std;

long long dp[21];    // dp[n] = n! 값 저장(메모이제이션). 13!부터 정수 오버플로우 발생 가능
long long factorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	if (dp[n] != 0)    // 이미 계산된 값일 경우 바로 리턴하기 위함 (재귀 횟수 최소화)
		return dp[n];
	return dp[n] = n * factorial(n - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	cout << factorial(N);

	return 0;
}