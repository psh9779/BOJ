#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	while (T--) {
		int N;
		cin >> N;

		int sum = 0;
		for (int i = 0; i < N; i++) {
			int temp;
			cin >> temp;
			sum += temp;
		}
		cout << sum << '\n';
	}

	return 0;
}