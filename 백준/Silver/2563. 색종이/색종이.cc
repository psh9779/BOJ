#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<bool>> arr(100, vector<bool>(100, false));    // 2차원 벡터의 모든 요소를 false로 초기화
	int T, i, j, res = 0;
	cin >> T;

	// 가로 세로의 길이가 10이며, i와 j는 각각 정사각형 도화지 왼쪽 하단 꼭짓점의 x,y좌표에 해당
	for (int t = 0; t < T; t++) {
		cin >> i >> j;
		for (int p = i; p < i + 10; p++) {
			for (int q = j; q < j + 10; q++) {
				if (!arr[q][p]) {
					arr[q][p] = true;
					res++;
				}
			}
		}
	}

	cout << res << '\n';

	return 0;
}