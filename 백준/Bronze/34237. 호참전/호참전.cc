// 문제를 빠르게 이해하고 풀도록 하자
#include <iostream>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++)
		cin >> v[i].first >> v[i].second;

	// N과 M의 최악의 경우 N*M == 5,000,000
	for (int j = 0; j < M; j++) {
		int total_game, xj, yj;
		cin >> total_game >> xj >> yj;
		
		int cnt = 0;
		for (int k = 0; k < N; k++) {
			if (v[k].first >= xj && v[k].second >= yj && (v[k].first + v[k].second <= total_game))
				cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}