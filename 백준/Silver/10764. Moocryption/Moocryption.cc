#include <iostream>
#include <vector>
#include <unordered_map>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// dx, dy 배열을 통해 8방향 탐색을 for문으로 처리 가능
int dx[8] = {0,-1,-1,-1,0,1,1,1};
int dy[8] = {1,1,0,-1,-1,-1,0,1};

int main() {
	fastio;

	int N, M; cin >> N >> M;
	vector<string> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];
	
	unordered_map<string, int> cnt;

	// (x,y)는 현재 위치
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < M; y++) {
			for (int pos = 0; pos < 8; pos++) {
				
				// (x,y)를 기준으로 dx[pos], dy[pos]만큼 이동한 위치를 (nx1,ny1)
				int nx1 = x + dx[pos];
				int ny1 = y + dy[pos];

				// (x,y)를 기준으로 (nx1,ny1)방향으로 한번 더 이동한 위치를 (nx2,ny2)
				int nx2 = x + 2 * dx[pos];
				int ny2 = y + 2 * dy[pos];

				if (nx2 < 0 || ny2 < 0 || nx2 >= N || ny2 >= M)
					continue;

				char c1 = v[x][y];
				char c2 = v[nx1][ny1];
				char c3 = v[nx2][ny2];

				// 즉, ABB형태의 문자열 조합인 경우에만 "MOO"로 대체 가능함
				if (c2 == c3 && c1 != c2) {
					// 자기 자신으로는 복호화 불가능하므로, 복호화 전 c1, c2, c3가 M, O, O 중 하나라면 불가능
					// 무조건 "복호화를 했을 때", 몇개의 MOO가 최대로 가능한지를 구하는 문제. (원본은 고려 X)
					if (c1 == 'M' || c2 == 'O')
						continue;

					string s;
					s += c1;
					s += c2;
					s += c3;
					cnt[s]++;
				}
			}
		}
	}

	int max_cnt = 0;
	for (auto& p : cnt) {
		if (p.second > max_cnt)
			max_cnt = p.second;
	}
	cout << max_cnt << '\n';

	return 0;
}