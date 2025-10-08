#include <iostream>
#include <cmath>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int T; cin >> T;

	while (T--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		
		int d = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

		int r_sum = r1 + r2;
		int r_diff = abs(r1 - r2);

		// 중점이 같은 경우
		if (x1 == x2 && y1 == y2) {
			if (r1 == r2)
				cout << -1 << '\n';
			else
				cout << 0 << '\n';
		}

		// 중점이 다른 경우
		else if (d > r_sum * r_sum || r_diff * r_diff > d)
			cout << 0 << '\n';
		else if (d == r_sum * r_sum || d == r_diff * r_diff)
			cout << 1 << '\n';
		else    // d < r_sum * r_sum && r_diff * r_diff < d인 경우
			cout << 2 << '\n';
	}

	return 0;
}