#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N;
	cin >> N;

	long long sum = 0;    // 최대합은 100000 * 1024 * 1024
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int temp;
			cin >> temp;
			sum += temp;
		}
	}
	cout << sum << '\n';

	return 0;
}