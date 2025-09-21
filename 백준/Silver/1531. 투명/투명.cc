#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[101][101] = { 0 }, N, M;
	cin >> N >> M;

	while (N--) {
		int lx, ly, rx, ry;    // 왼쪽 아래 x,y 및 오른쪽 위 x,y 좌표가 주어짐
		cin >> lx >> ly >> rx >> ry;    // 모든 좌표는 1이상 100이하의 자연수

		for (int i = ly; i <= ry; i++) {
			for (int j = lx; j <= rx; j++)
				arr[i][j]++;
		}
	}

	int cnt = 0;    // 보이지 않는 그림의 개수
	for (int m = 1; m <= 100; m++) {
		for (int n = 1; n <= 100; n++) {
			if (arr[m][n] > M)
				cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}