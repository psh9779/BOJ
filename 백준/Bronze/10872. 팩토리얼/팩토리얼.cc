#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 0 || n == 1)
		return 1;
	return n * factorial(n - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 0 <= N <= 12
	
	cout << factorial(N);

	return 0;
}