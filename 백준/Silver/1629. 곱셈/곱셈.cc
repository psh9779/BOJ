// 큰 수의 제곱 -> divide and conquer 방식
#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

long long A, B, C;

long long power(long long B) {
	if (B == 0) return 1;
	if (B == 1) return A % C;

	long long K = power(B / 2) % C;
	if (B % 2) return (K * K % C * A) % C;
	else return K * K % C;
}

int main() {
	fastio;
	cin >> A >> B >> C;

	long long res;
	res = power(B);

	cout << res << '\n';

	return 0;
}