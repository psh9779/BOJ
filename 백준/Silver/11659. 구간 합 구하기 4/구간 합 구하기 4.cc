#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 0.4MB 크기이므로 스택 오버플로우 발생 X
	int S[100001] = {};    // 빈 중괄호로 배열 초기화 == 모든 요소가 0으로 채워진다

	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		int temp;
		cin >> temp;
		S[i] += S[i - 1] + temp;    // S[0] = 0에 해당하므로, 합 배열을 만드는 공식 이용
	}

	for (int j = 0; j < M; j++) {
		int start, end;
		cin >> start >> end;
		cout << S[end] - S[start - 1] << '\n';
	}

	return 0;
}