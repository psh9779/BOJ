#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int E, S, M;
	cin >> E >> S >> M;

	int temp_E = E;
	while (1) {
		int temp_S = (temp_E % 28 ? temp_E % 28 : 28);
		int temp_M = (temp_E % 19 ? temp_E % 19 : 19);

		if (temp_S == S && temp_M == M)
			break;

		temp_E += 15;
	}
	cout << temp_E << '\n';

	return 0;
}





/* 더 간결하게
#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	int E, S, M;
	cin >> E >> S >> M;

	for (int year = E; ; year += 15) {
		if ((year - S) % 28 == 0 && (year - M) % 19 == 0) {
			cout << year << '\n';
			break;
		}
	}

	return 0;
}
*/