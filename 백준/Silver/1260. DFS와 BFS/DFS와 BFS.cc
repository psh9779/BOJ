#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void DFS(int v) {
	visited[v] = true;
	cout << v;

	for (int i : adj[v]) {
		if (!visited[i]) {
			cout << ' ';
			DFS(i);
		}
	}
	return;
}

void BFS(int v) {
	queue<int> q;
	visited[v] = true;
	cout << v;
	q.push(v);

	while (!q.empty()) {
		int temp = q.front();
		q.pop();

		for (int i : adj[temp]) {
			if (!visited[i]) {
				visited[i] = true;
				q.push(i);
				cout << ' ' << i;
			}
		}
	}
	return;
}


int main() {
	fastio;

	int N, M, V; cin >> N >> M >> V;
	adj.resize(N + 1);

	// 입력으로 주어지는 간선은 양방향
	while (M--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// 방문할 수 있는 정점이 여러개인 경우에 정점 번호가 작은 것을 먼저 방문하기 위해 정렬
	for (int i = 1; i <= N; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	visited.resize(N + 1, false);    // 또는 visited = vector<bool>(N+1, false);
	DFS(V);
	cout << '\n';

	// resize(new_size, value)는 새로 추가된 크기에만 지정한 값으로 초기화하며 "기존 값들은 그대로 유지"(크기가 같으면 기존값으로 유지되므로 변화 X)함
	// 따라서, .clear() 후 resize()를 수행하거나, assign()으로 재할당
	// assign(new_size, value)는 기존 크기와 상관없이 벡터를 새로운 크기와 새로운 값으로 완전히 덮어씀
	visited.assign(N + 1, false);
	BFS(V);
	cout << '\n';

	return 0;
}