// 많은 수에 대한 소수 판정 -> "무조건 에라토스테네스의 체"를 이용
#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

const int MAX_NUM = 246912;

int main() {
	fastio;

	vector<bool> isPrime(MAX_NUM + 1, true);
	isPrime[0] = isPrime[1] = false;    // 0과 1은 소수가 아니므로 미리 초기화

	// 에라토스테네스의 체
	for (int i = 2; i * i <= MAX_NUM; i++) {
		if (isPrime[i]) {    // i값이 소수인 경우에만 반복문 수행
			for (int j = i * i; j <= MAX_NUM; j += i)
				isPrime[j] = false;
		}
	}

	// 소수 개수 세기 (누적합 배열)
	vector<int> prime_cnt(MAX_NUM + 1, 0);
	for (int k = 2; k <= MAX_NUM; k++) {
		prime_cnt[k] = prime_cnt[k - 1] + (isPrime[k] ? 1 : 0);
	}

	while (1) {
		int n;
		cin >> n;

		if (n == 0) break;
		cout << prime_cnt[2 * n] - prime_cnt[n] << '\n';
	}

	return 0;
}



/* 정답 처리된 다른 코드 (but, 많은 수에 대한 소수 판정은 에라토스테네스의 체를 이용하도록 하자)
#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// 이는 "어떤 n값 하나"가 소수인지 아닌지를 판정할 때 효율적인 방법임 (많은 수를 한꺼번에 검사할 때는 에라토스테네스의 체가 더 효율적)
bool isPrime(int n) {
	if (n <= 1)
		return false;
	if (n == 2 || n == 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

int main() {
	fastio;

	while (1) {
		int n;
		cin >> n;    // 1 <= n <= 123,456

		if (n == 0)
			break;

		int cnt = 0;
		for (int i = n+1; i <= 2 * n; i++) {
			if (isPrime(i))
				cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}
*/
