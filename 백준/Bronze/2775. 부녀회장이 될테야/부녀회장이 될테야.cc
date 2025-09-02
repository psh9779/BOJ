#include <iostream>
using namespace std;

// 아파트는 0층부터 있음
// 각 층에는 1호부터 14호까지 있음
// 0층의 i호에는 i명이 삼
int liveCount(int a, int b) {    // a층에 b호엔 몇명 살 수 있는지
	if (a == 0)
		return b;
	if (b == 1)
		return 1;
	return liveCount(a - 1, b) + liveCount(a, b - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, k, n;    // 1 <= k,n <= 14이고, T는 시간제한 0.5초 이내에 해결할 수 있는 정도의 작은 정수값이라고 생각하면 됨 (따로 주어지지 않았으므로)
	cin >> T;

	for (int cnt = 1; cnt <= T; cnt++) {
		cin >> k >> n;
		cout << liveCount(k, n) << '\n';
	}
	
	return 0;
}