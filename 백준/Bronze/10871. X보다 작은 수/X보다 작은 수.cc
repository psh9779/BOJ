#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, X, seq[10001];

	cin >> N >> X;
	// cin과 cout이 반복문 안에서 번갈아 발생
	// tie를 끊어 (cin.tie(NULL)) cin 입력 시 자동 flush가 발생하지 않게 하여 속도를 향상시킴
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
		if (seq[i] < X)
			cout << seq[i] << ' ';
	}
	cout << endl;    // 반복문 중간에 flush가 발생하지 않았더라도, endl에 의해 버퍼가 flush되어 이 시점에 화면에 출력

	return 0;
}