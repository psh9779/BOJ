#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cout << "n e\n" << "- -----------\n";

	for (int n = 0; n < 10; n++) {
		double sum = 0.0;
		if (n == 3) {
			cout << fixed;
			cout.precision(9);
		}
		for (int cnt = 0; cnt <= n; cnt++) {
			sum += 1 / double(factorial(cnt));
		}
		cout << n << ' ' << sum << '\n';
	}

	return 0;
}