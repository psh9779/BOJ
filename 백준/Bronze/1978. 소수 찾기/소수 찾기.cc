#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, res = 0;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int temp, cnt = 1;
		cin >> temp;

		// 입력이 1인 경우, 1은 소수가 아니므로 2부터 temp와 %연산 실시
		for (int j = 2; j <= temp; j++) {
			if (temp % j == 0)
				cnt++;
		}

		if (cnt == 2)
			res++;
	}
	cout << res << '\n';

	return 0;
}