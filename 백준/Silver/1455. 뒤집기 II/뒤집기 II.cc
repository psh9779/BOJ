#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// 최악의 경우, 100 * 100개의 동전을 100*100회 뒤집게 될 수 있음 -> 1억회 연산 필요
// 즉, 시간복잡도는 O(N^2 * M^2)
void flip(vector<vector<bool>>& v, int x, int y) {
	for (int i = 1; i <= x; i++) {
		for (int j = 1; j <= y; j++) {
			v[i][j] = !v[i][j];
		}
	}
}

int main() {
	fastio;

	int N, M;
	cin >> N >> M;

	vector<vector<bool>> v(N + 1, vector<bool>(M + 1));
	for (int i = 1; i <= N; i++) {
		string temp;
		cin >> temp;
		for (int j = 1; j <= M; j++) {
			v[i][j] = temp[j - 1] - '0';
		}
	}

	int cnt = 0;    // 동전을 뒤집는 횟수 저장
	for (int i = N; i >= 1; i--) {
		for (int j = M; j >= 1; j--) {
			if (v[i][j]) {    // v[i][j] 값이 1(즉, true)인 경우
				flip(v, i, j);
				cnt++;
			}
		}
	}
	cout << cnt << '\n';

	return 0;
}