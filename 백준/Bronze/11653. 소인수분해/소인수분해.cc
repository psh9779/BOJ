// 소수 : 1과 자기자신만을 약수로 갖는 수
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int cnt = 2;
	while (N != 1) {
		if (N % cnt == 0) {
			cout << cnt << '\n';
			N /= cnt;
		}
		else
			cnt++;
	}

	return 0;
}