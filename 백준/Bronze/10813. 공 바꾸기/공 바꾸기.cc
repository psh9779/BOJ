#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, i, j;
	int array[101];
	
	cin >> N >> M;

	// 1. 바구니 번호에 맞는 공 담기 (초기 상황 세팅)
	for (int p = 1; p <= N; p++)
		array[p] = p;

	// 2. M회 공 바꾸기
	for (int q = 1; q <= M; q++) {
		cin >> i >> j;
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}

	for (int r = 1; r <= N; r++) {
		if (r > 1) cout << ' ';
		cout << array[r];
	}
	cout << '\n';
	
	return 0;
}