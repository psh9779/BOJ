#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 입력값인 N의 최댓값은 100이고, n*(n+1)/2, (n*(n+1)/2)^2의 최대값은 int 범위를 넘지 않는 값이다.
	// 수학적으로, 1부터 N까지 수의 세제곱의 합 == (1부터 N까지 수의 합)의 제곱으로 나타난다. (Σk^3 계산 공식)
	int N;
	cin >> N;

	int res1 = 0, res2, res3 = 0;
	for (int i = 1; i <= N; i++) {
		res1 += i;
		res3 += i * i * i;
	}

	res2 = res1 * res1;
	
	cout << res1 << '\n' << res2 << '\n' << res3 << '\n';
	return 0;
}	