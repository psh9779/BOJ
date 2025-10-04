#include <iostream>
#include <queue>
#include <string>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, K;
	cin >> N >> K;

	queue<pair<int, int>> qu;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			int value;
			cin >> value;

			pair<int, int> temp;
			temp.first = i + 1;
			temp.second = value;
			qu.push(temp);
		}
	}

	int res_n, res_v, move = 0;
	while (1) {
		res_n = qu.front().first;
		res_v = qu.front().second;
		move = qu.front().second - 1;
		qu.pop();

		if (qu.empty())
			break;

		for (int i = 0; i < move; i++) {
			qu.push(qu.front());
			qu.pop();
		}
	}
	cout << res_n << ' ' << res_v << '\n';

	return 0;
}