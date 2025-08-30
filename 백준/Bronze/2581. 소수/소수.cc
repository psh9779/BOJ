// 소수 : 1과 자기자신만을 약수로 갖는 수
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, N, min = 10001, sum = 0;
	cin >> M >> N;    // M,N은 10,000 이하의 자연수

	for (int i = M; i <= N; i++) {
		int cnt = 1;
		// 2 이상의 자연수에 대해 1은 공통된 약수이며, 1은 소수가 아님
		for (int j = 2; j <= i; j++) {
			if (cnt > 2)
                break;
			else if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			sum += i;
			if (min > i)
				min = i;
		}
	}

	if (min == 10001)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min << '\n';

	return 0;
}