#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// T는 Touchdowns 횟수 (각 6점)
	// F는 Field goals 횟수 (각 3점)
	// S는 Safeties 횟수 (각 2점)
	// P는 Points-after-touchdown 횟수 (각 1점)
	// C는 two-point Conversions after touchdown 횟수 (각 2점)
	// 입력은 2줄
	// 출력 형식 맞춰서 출력할 것

	int T, F, S, P, C, res1, res2;
	for (int i = 0; i < 2; i++) {
		cin >> T >> F >> S >> P >> C;
		if (i == 0) res1 = T * 6 + F * 3 + S * 2 + P * 1 + C * 2;
		else if (i == 1) res2 = T * 6 + F * 3 + S * 2 + P * 1 + C * 2;
	}
	cout << res1 << ' ' << res2 << '\n';

	return 0;
}