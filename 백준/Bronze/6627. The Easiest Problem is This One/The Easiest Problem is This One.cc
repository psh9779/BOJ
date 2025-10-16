#include <iostream>
#include <string>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int sum_Jarisu(int N) {
	int sum = 0;
	while (N != 0) {
		sum += N % 10;
		N = N / 10;
	}
	return sum;
}

int main() {
	fastio;

	while (1) {
		int N; cin >> N;

		if (N == 0)
			break;

		int SN = sum_Jarisu(N);
		int p = 11;
		while (1) {
			if (sum_Jarisu(N * p) == SN) {
				cout << p << '\n';
				break;
			}
			p++;
		}
	}

	return 0;
}