#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// (a ^ b) % c == (a%c * a%c * a%c ... * a%c) % c
// (8^4) % c == (64^2) % c == (4^6) % c == (2^12) % c
long long div(long long A, long long B, long long C) {
	if (B == 1) return A % C;
	if (B % 2) return (div(A, B / 2, C) * div(A, B / 2, C) % C * A) % C;
	else return div(A, B / 2, C) * div(A, B / 2, C) % C;
}

int main() {
	fastio;

	long long A, B, C;
	cin >> A >> B >> C;

	long long res = 1;
	res = div(A, B, C);

	cout << res << '\n';

	return 0;
}