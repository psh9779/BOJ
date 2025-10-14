#include <iostream>
#include <vector>
#include <climits>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<int>> v;
int main() {
	fastio;
	int N, M, B;
	cin >> N >> M >> B;
	v.resize(N, vector<int>(M));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> v[i][j];
		}
	}

	// 최소 시간이 걸리되, 땅의 높이가 가장 높은것을 출력
	int min_time = INT_MAX, max_height = 0;
	for (int target = 0; target <= 256; target++) {
		int use = 0, remove = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (v[i][j] > target)
					remove += (v[i][j] - target);
				else if (v[i][j] < target)
					use += target - v[i][j];
			}
		}

		if (use <= remove + B) {
			int total_time = remove * 2 + use;
			if (total_time <= min_time) {
				min_time = total_time;
				max_height = target;    // target은 오름차순으로 0부터 256까지 확인하므로 최소시간이 같은 경우에도 계속 갱신해줘야 함
			}
		}
	}
	cout << min_time << ' ' << max_height << '\n';

	return 0;
}