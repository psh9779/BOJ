#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, A, B;
	cin >> N >> M >> A >> B;

	if (M >= N * 3)
		cout << "0\n";
	else
		cout << (N * 3 - M) * A + B << '\n';

	return 0;
}