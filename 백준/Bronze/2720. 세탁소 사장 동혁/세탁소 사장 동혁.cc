#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, C;
	cin >> T;

	const int Quarter = 25, Dime = 10, Nickel = 5, Penny = 1;
	for (int i = 0; i < T; i++) {
		cin >> C;
		cout << C / Quarter << ' ';
		C %= Quarter;
		cout << C / Dime << ' ';
		C %= Dime;
		cout << C / Nickel << ' ';
		C %= Nickel;
		cout << C / Penny << '\n';
	}

	return 0;
}