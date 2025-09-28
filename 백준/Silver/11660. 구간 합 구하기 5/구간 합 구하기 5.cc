#include <iostream>
using namespace std;

// 해당 문제는 공식을 일반화하여 해결하는것이 관건 (그리면서 공식 유도해보기)
int S[1025][1025];    // 전역으로 선언 -> 모든 요소 0 채워짐
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	// 구간 합 배열 채우기
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> S[i][j];

			// 구간 합 계산
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + S[i][j];
		}
	}

	// M회 반복하여 합을 구하도록 함
	for (int k = 0; k < M; k++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int res = S[x2][y2] - S[x2][y1 - 1] - S[x1 - 1][y2] + S[x1 - 1][y1 - 1];
		cout << res << '\n';
	}

	return 0;
}