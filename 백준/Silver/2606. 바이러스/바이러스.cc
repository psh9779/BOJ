#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<int>> v;
vector<bool> visited;

void DFS(int n) {
	visited[n] = true;
	for (int node : v[n]) {
		if (!visited[node])
			DFS(node);
	}
}

int main() {
	fastio;

	int N; cin >> N;    // 100이하의 양의 정수
	v.resize(N + 1);
	visited.resize(N + 1, false);

	int T; cin >> T;    // 네트워크 상에서 직접 연결되어 있는 쌍의 수

	while (T--) {
		int n1, n2; cin >> n1 >> n2;
		v[n1].push_back(n2);
		v[n2].push_back(n1);
	}

	DFS(1);

	int infected_cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (visited[i])
			infected_cnt++;
	}

	// 1번 컴퓨터를 통해서 웜 바이러스에 걸리게 되는 컴퓨터의 수를 출력 (1번 컴퓨터는 포함 X)
	cout << infected_cnt - 1 << '\n';

	return 0;
}