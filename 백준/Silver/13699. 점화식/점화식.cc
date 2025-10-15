#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

long long T[36];
int main() {
	fastio;

	int n; cin >> n;
	
	T[0] = 1;
	for (int t = 1; t <= n; t++) {
		for (int i = 0; i <= (t - 1) / 2; i++)
			T[t] += 2 * (T[i] * T[t - i - 1]);

		if (t % 2 == 1)
			T[t] -= (T[(t - 1) / 2] * T[(t - 1) / 2]);
	}
	cout << T[n] << '\n';

	return 0;
}