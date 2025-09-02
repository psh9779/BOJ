#include <iostream>
using namespace std;

// 두 수의 최대 공약수 구하는 방법 (유클리드 호제법 : 두 수끼리 나눠서 하나의 나머지가 0이 될 때, 다른 한쪽의 값이 최대공약수가 됨)
// 두 수의 최소 공배수 구하는 방법 (두 수의 최소공배수 == 두 수의 곱 / 두 수의 최대공약수)
int returnGCD(int a, int b) {
	while (1) {
		if (a < b) {    // a >= b임을 확실히 하기 위함
			int temp = a;
			a = b;
			b = temp;
		}

		if (b == 0)
			break;

		a = a % b;
	}

	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int gcd, lcm;    // greatest common divisor, least common multiple
	int n1, n2;    // 두 입력은 모두 10000 이하의 자연수
	cin >> n1 >> n2;

	gcd = returnGCD(n1, n2);
	lcm = n1 * n2 / gcd;

	cout << gcd << '\n' << lcm << '\n';
	return 0;
}


/* "재귀를 이용한" 유클리드 호제법
#include <iostream>
using namespace std;

// 재귀를 이용한 GCD
int GCD(int a, int b) {
	if (b == 0)
		return a;
	return GCD(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n1, n2;
	cin >> n1 >> n2;

	int gcd = GCD(n1, n2);
	int lcm = n1 * n2 / gcd;

	cout << gcd << '\n' << lcm << '\n';
	return 0;
}
*/