#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N;
	cin >> N;

	int ans = 0;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;

		if (i == 0)
			ans += temp;    // 처음 멀티탭을 꽂는 경우
		else
			ans += (temp - 1);    // 두번째부터 멀티탭을 꽂는 경우 (콘센트 하나는 다른 멀티탭 연결을 위해 쓰이므로)
	}

	cout << ans << '\n';

	return 0;

}
