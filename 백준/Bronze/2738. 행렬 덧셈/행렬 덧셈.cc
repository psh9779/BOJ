#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, temp;
	cin >> N >> M;

	vector<vector<int>> arr(N, vector<int>(M, 0));    // N*M 크기의 2차원 벡터를 선언하고 0으로 초기화

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> temp;
				arr[j][k] += temp;
			}
		}
	}

	for (int p = 0; p < N; p++) {
		for (int q = 0; q < M; q++) {
			if (q > 0) cout << ' ';
			cout << arr[p][q];
		}
		cout << '\n';
	}

	return 0;
}