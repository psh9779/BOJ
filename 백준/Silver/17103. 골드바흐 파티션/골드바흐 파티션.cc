#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
	fastio;

	vector<bool> isPrime(1000001, true);
	isPrime[0] = isPrime[1] = false;    // C++에서는 전역 영역(Global scope)에서 실행문(statement)은 허용되지 않음

	// 에라토스테네스의 체
	for (int i = 2; i * i <= 1000000; i++) {
		// i가 소수인 경우에만 i*i부터 i씩 증가시키면서 소수가 아니므로 제거 (소수 체크를 하여 불필요한 반복을 줄이기)
		if (isPrime[i]) {
			for (int j = i * i; j <= 1000000; j += i)
				isPrime[j] = false;
		}
	}


	int T; cin >> T;
	while (T--) {
		int N; cin >> N;
		int cnt = 0;
		for (int i = 2; i <= N / 2; i++)
			if (isPrime[i] && isPrime[N - i])
				cnt++;
		cout << cnt << '\n';
	}

	return 0;
}