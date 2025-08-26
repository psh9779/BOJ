#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int row, col, max = -1;
	vector<vector<int>> arr(9, vector<int>(9));    // 초기화하지 않았으므로 쓰레기값으로 채워짐

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			// 최댓값이 두 개 이상인 경우 그 중 한 곳의 위치를 출력하면 되므로
			// 중복된 최댓값이 존재하는 경우, 첫 번째 나타나는 위치를 출력하도록 함
			if (max < arr[i][j]) {    // '='을 포함할 경우 중복된 최댓값 중 가장 나중에 나타나는 위치가 출력됨 -> 이 또한 정답
				max = arr[i][j];
				row = i + 1;
				col = j + 1;
			}
		}
	}
	cout << max << '\n' << row << ' ' << col << '\n';

	return 0;
}