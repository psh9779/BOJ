#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, i, j, array[101];
	
	cin >> N >> M;
	for (int p = 1; p <= N; p++)
		array[p] = p;

	for (int q = 0; q < M; q++) {
		cin >> i >> j;
		for (; i < j; i++) {    // 초기화문 생략
			int temp = array[i];
			array[i] = array[j];
			array[j--] = temp;
		}
	}

	for (int t = 1; t <= N; t++) {
		if (t > 1) cout << ' ';
		cout << array[t];
	}
	cout << '\n';

	return 0;
}