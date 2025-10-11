#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;

	long long total_apple_cost = 0;
	long long total_g = 0;
	for (int i = 0; i < N; i++) {
		char T;
		int W, H, L;
		cin >> T >> W >> H >> L;

		if (T == 'A') {
			int apple_cnt = (W / 12) * (H / 12) * (L / 12);
			total_apple_cost += apple_cnt * 4000;
			total_g += 1000 + apple_cnt * 500;
		}
		else if (T == 'B') {
			total_g += 6000;
		}
	}
	cout << total_g << '\n' << total_apple_cost << '\n';

	return 0;
}