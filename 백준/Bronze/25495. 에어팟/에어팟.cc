#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;

	int res = 0, use_battery = 2;
	int before_phone; cin >> before_phone;
	res += use_battery;    // 처음 동작은 무조건 2를 소모

	for (int j = 2; j <= N; j++) {
		int after_phone;
		cin >> after_phone;

		if (before_phone != after_phone) use_battery = 2;
		else use_battery *= 2;    // before_phone == after_phone인 경우

		res += use_battery;
		before_phone = after_phone;

		if (res >= 100) {
			res = 0;
			use_battery = 1;    // 1로 초기화하는 부분이 포인트
		}

	}
	cout << res << '\n';

	return 0;
}