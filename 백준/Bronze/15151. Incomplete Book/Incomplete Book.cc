#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int k, d; cin >> k >> d;

	int cnt = 0;
	while (d - k >= 0) {
		d -= k;
		cnt++;
		k *= 2;
	}
	cout << cnt << '\n';

	return 0;
}