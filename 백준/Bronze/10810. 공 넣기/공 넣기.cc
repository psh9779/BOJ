#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, i, j, k;
	int array[100] = { 0 };    // 공이 들어있지 않은 바구니는 0을 출력해야함
	
	cin >> N >> M;

	for (int cnt = 0; cnt < M; cnt++) {
		cin >> i >> j >> k;
		for (int t = i - 1; t < j; t++)
			array[t] = k;
	}

	for (int cnt = 0; cnt < N; cnt++) {
		if (cnt > 0) cout << ' ';
		cout << array[cnt];
	}
	cout << '\n';

	return 0;
}