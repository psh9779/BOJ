#include <iostream>
#include <unordered_set>
using namespace std;

int getGCD(int A, int B) {
	if (B == 0)
		return A;
	return getGCD(B, A%B);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int cnt = 0; cnt < T; cnt++) {
		int A, B;
		cin >> A >> B;
		int gcd_res = getGCD(A, B);
		cout << A * B / gcd_res << '\n';
	}

	return 0;
}