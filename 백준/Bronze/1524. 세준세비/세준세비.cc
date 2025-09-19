
/* 쉽게 maxS, maxB 변수만을 갱신하여 풀이하는 코드 */
#include <iostream>
#include <algorithm>    // max()
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;

		int maxS = 0, maxB = 0;
		for (int i = 0; i < N; i++) {
			int S;
			cin >> S;
			maxS = max(maxS, S);
		}

		for (int j = 0; j < M; j++) {
			int B;
			cin >> B;
			maxB = max(maxB, B);
		}

		cout << (maxS >= maxB ? "S\n" : "B\n");
	}

	return 0;
}