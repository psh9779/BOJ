#include <iostream>
#include <string>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int n; cin >> n;
	string origin; cin >> origin;

	int diff_cnt = 0;
	for (int i = 0; i < n; i++) {
		char c; cin >> c;
		if (c != origin[i])
			diff_cnt++;
	}
	cout << diff_cnt << '\n';

	return 0;
}