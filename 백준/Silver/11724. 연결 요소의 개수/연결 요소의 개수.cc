#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<int>> adj;    // 인접 리스트를 2차원 벡터로 구현
vector<bool> visited;    // 방문 여부 저장
void DFS(int v) {
	visited[v] = true;
	for (int t : adj[v]) {
		if (!visited[t])
			DFS(t);
	}
}

int main() {
	fastio;
	int N, M; cin >> N >> M;

	adj.resize(N + 1);
	visited = vector<bool>(N + 1, false);

	// 방향 없는 그래프이므로 양방향으로 저장
	while (M--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int count = 0;    // 연결 요소의 개수 == DFS 재귀 호출이 끝나는 횟수
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			count++;
			DFS(i);
		}
	}
	cout << count << '\n';
	return 0;
}





/* BFS로 풀이 : DFS와 달리, BFS의 경우에는, 연결 요소의 개수 == 방문하지 않은 정점에서 BFS를 새로 시작하는 횟수
#include <iostream>
#include <vector>
#include <queue>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<int>> adj;    // 인접 그래프 정의
vector<bool> visited;    // 방문 여부 저장
void BFS(int v) {
	queue<int> q;
	visited[v] = true;
	q.push(v);

	while (!q.empty()) {
		int temp = q.front();
		q.pop();

		for (int next : adj[temp]) {
			if (!visited[next]) {
				visited[next] = true;
				q.push(next);
			}
		}
	}
}

int main() {
	fastio;

	int N, M; cin >> N >> M;
	while (M--) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	int count = 0;    // 연결 요소 개수
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			count++;
			BFS(i);
		}
	}
	cout << count << '\n';

	return 0;
}
*/