#include <iostream>
using namespace std;

// 유클리드 호제법을 재귀 방식으로 구현
long long returnGCD(long long a, long long b) {
	if (b == 0)
		return a;
	return returnGCD(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long A, B, res_LCM;
	cin >> A >> B;

	res_LCM = A / returnGCD(A, B) * B;    // A와 B를 먼저 곱한 후 최대공약수로 나누게되면, 먼저 곱할 때 오버플로가 발생할 수 있음에 주의
	cout << res_LCM << '\n';

	return 0;
}