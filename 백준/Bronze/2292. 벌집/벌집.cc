#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, step = 1;
	cin >> N;

	for (int sum = 2; sum <= N; step++)
		sum += 6 * step;

	cout << step << '\n';
	return 0;
}