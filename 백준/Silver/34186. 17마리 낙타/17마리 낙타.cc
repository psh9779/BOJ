#include <iostream>
using namespace std;

long long returnGCD(long long a, long long b) {
	return (b == 0 ? a : returnGCD(b, a % b));
}

long long returnLCM(long long a, long long b) {
	return a / returnGCD(a, b) * b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;    // T는 1000 이하의 자연수

	long long N, A, B, C;
	for (int i = 0; i < T; i++) {
		cin >> N >> A >> B >> C;

		long long denom = returnLCM(returnLCM(A, B), C);    // 공통 분모
		long long nume = denom / A + denom / B + denom / C;    // 통분 시, 분자 합

		if (nume > denom) {    // 비율 합이 1보다 큰 경우
			cout << -1 << '\n';
		}
		else if (nume == denom) {    // 비율 합이 1인 경우
			if (N % denom == 0) cout << "0\n";
			else cout << "-1\n";
		}
		else {    // 비율 합이 1보다 작은 경우 : (N+K) * nume / denom == N 즉, K == N * denom / nume - N이 성립해야 함
			long long total = N * denom;
			if (total % nume != 0)
				cout << "-1\n";
			else{    // N * denom / nume이 정수 값인 경우
				long long N_K = total / nume;    // 수식에 따라서 N+K값 구하기
				if (N_K < N || N_K % denom != 0)    // K값이 음수이거나 N+K값이 lcm으로 나누어 떨어지지 않는 경우 (N+K 값이 A,B,C로 각각 나누어 떨어져야하므로 N+K값은 결국 lcm으로 나누어 떨어져야 함)
					cout << "-1\n";
				else
					cout << N_K - N << '\n';
			}
		}
	}

	return 0;
}
