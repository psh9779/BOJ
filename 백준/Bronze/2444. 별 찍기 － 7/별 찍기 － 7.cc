#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;

	for (int i = 1; i <= 2 * N - 1; i++) {
		if (i <= N) {
			for (int j = 0; j < N - i; j++)
				cout << ' ';
			for (int k = 1; k <= 2 * i - 1; k++)
				cout << '*';
			cout << '\n';
		}
		else {    // i > N인 경우
			for (int p = 1; p <= i-N; p++)
				cout << ' ';
			for (int q = 1; q <= 2*N-1 - 2*(i-N); q++)
				cout << '*';
			cout << '\n';
		}
	}

	return 0;
}

/* 다른 코드 : 큰 for문을 2개로 쪼개어 생각
#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {    // 1번째 줄부터 n번째 줄까지 출력
		for (int j = 0; j < n - i; j++)
			cout << ' ';
		for (int j = 0; j < 2 * i - 1; j++)
			cout << '*';
		cout << '\n';
	}
	for (int i = n - 1; i > 0; i--) {    // n+1번째 줄부터 2n-1번째 줄까지 출력
		for (int j = 0; j < n - i; j++)
			cout << ' ';
		for (int j = 0; j < 2 * i - 1; j++)
			cout << '*';
		cout << '\n';
	}

	return 0;
}
*/