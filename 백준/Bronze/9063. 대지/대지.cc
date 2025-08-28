#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 1 <= N <= 100000, -10000 <= x,y <= 10000
	int N, x, y;
	cin >> N;

	int max_x = -10001, max_y = -10001, min_x = 10001, min_y = 10001;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		max_x = (max_x < x) ? x : max_x;
		max_y = (max_y < y) ? y : max_y;
		min_x = (min_x > x) ? x : min_x;
		min_y = (min_y > y) ? y : min_y;
	}

	cout << (max_x - min_x) * (max_y - min_y) << '\n';
	
	return 0;
}

/* <algorithm> 헤더에 포함된 std::max, std::min을 이용하는 방법도 有*/