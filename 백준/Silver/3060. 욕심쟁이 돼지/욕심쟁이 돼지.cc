#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	fastio;
	ll T;
	cin >> T;

	while (T--) {
		ll N;
		cin >> N;

		ll S[6], S_new[6];
		for (int i = 0; i < 6; i++)
			cin >> S[i];

		int day = 1;
		ll total = 0;
		for (int i = 0; i < 6; i++)
			total += S[i];

		if (total > N) {
			cout << day << '\n';
			continue;
		}

		while (1) {
			day++;

			for (int i = 0; i < 6; i++) {
				ll left = S[(i + 5) % 6];
				ll right = S[(i + 1) % 6];
				ll opposite = S[(i + 3) % 6];
				S_new[i] = S[i] + left + right + opposite;
			}

			total = 0;
			for (int i = 0; i < 6; i++)
				total += S_new[i];

			if (total > N) {
				cout << day << '\n';
				break;
			}

			for (int i = 0; i < 6; i++)
				S[i] = S_new[i];
		}
	}

	return 0;
}