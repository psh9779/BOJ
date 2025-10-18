#include <iostream>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, M; cin >> N >> M;
	int min_6 = 1000, min_1 = 1000;
	while (M--) {
		int cost_6, cost_1;
		cin >> cost_6 >> cost_1;

		min_6 = min(cost_6, min_6);
		min_1 = min(cost_1, min_1);
	}

	int min_res;
	if (min_6 > min_1 * 6)
		min_res = min_1 * N;
	else if (min_6 < min_1 * (N % 6))
		min_res = min_6 * (N / 6 + 1);
	else
		min_res = min_6 * (N / 6) + min_1 * (N % 6);

	/*	initializer_list 방식을 이용하여 다음과 같이 구할 수 있음
	int min_res = min({ min_1 * N, min_6 * (N / 6 + 1), min_6 * (N / 6) + min_1 * (N % 6) });
	*/

	cout << min_res << '\n';
	return 0;
}