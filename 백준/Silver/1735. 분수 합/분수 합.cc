// 부분 문자열을 어떻게 구해낼 것인가를 생각!
#include <iostream>
using namespace std;

// 유클리드 호제법을 재귀 방식으로 구현
int returnGCD(int a, int b) {
	if (b == 0)
		return a;
	return returnGCD(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A1, B1, A2, B2;
	cin >> A1 >> B1 >> A2 >> B2;    // A1/B1 + A2/B2

	int res_A = A1 * B2 + A2 * B1;
	int res_B = B1 * B2;
	int gcd_total = returnGCD(res_A, res_B);
	
	cout << res_A / gcd_total << ' ' << res_B / gcd_total << '\n';

	return 0;
}