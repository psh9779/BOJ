#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// 비행기는 자기 자신을 왕복하지 못하며, 무조건 서로 다른 국가끼리 연결됨
// 그래프의 모든 정점을 잇는 간선의 최소 개수 = N-1
int main() {
	fastio;
	int T; cin >> T;    // T <= 100
	
	while (T--) {
		int N, M; cin >> N >> M;    // 2 <= N <= 1000, 1 <= M <= 10000
		
		int a, b;
		while (M--) {
			cin >> a >> b;
		}
		cout << N - 1 << '\n';
	}

	return 0;
}