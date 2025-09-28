#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool isPrime(int n) {
	if (n <= 1)
		return false;
	if (n == 2 || n == 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main() {
	fastio;

	while (1) {
		int n;
		cin >> n;    // 1 <= n <= 123,456

		if (n == 0)
			break;

		int cnt = 0;
		for (int i = n+1; i <= 2 * n; i++) {
			if (isPrime(i))
				cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}