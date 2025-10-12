#include <iostream>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	fastio;

	int T; cin >> T;

	while (T--) {
		ll n, s, t; cin >> n >> s >> t;
		ll total_t = 0;

		while (n > 0) {
			if (n % 2) {    // n이 홀수인 경우 하고 싶은 말을 한번 적음으로써 짝수로 만듦
				total_t += s;
				n -= 1;
			}

			// 이제 n은 짝수
			n = n / 2;

			// total_t += min(n * s, t);로 작성 시, n * s에서 오버플로 발생 가능
			// n*s의 값과 t값을 비교하는 것이므로, n값과 t/s값을 비교하는 것으로 생각할 수 있음
			if (n > t / s)
				total_t += t;
			else    // n <= t/s인 경우. 즉, n*s <= t이며, t <= 10^9이므로 n * s <= 10^9 범위의 값임을 의미함 (오버플로 방지 가능)
				total_t += n * s;
		}

		cout << total_t << '\n';
	}

	return 0;
}