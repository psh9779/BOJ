#include <iostream>
using namespace std;

int main(void) {
	int N, X, seq[10001];

	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
		if (seq[i] < X)
			cout << seq[i] << ' ';
	}
	cout << endl;

	return 0;
}