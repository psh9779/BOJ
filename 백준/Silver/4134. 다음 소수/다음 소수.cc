#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

/*
	모든 소수는 2와 3으로 나누어 떨어지지 않는 수로 표현 가능
	모든 정수 n은 "6k+r"의 형태(r = 0,1,2,3,4,5)로 나타낼 수 있음
		6k : 2,3으로 둘 다 나누어 떨어짐
		6k+1 : 소수 가능성 있음
		6k+2 : 2로 나누어 떨어짐
		6k+3 : 3으로 나누어 떨어짐
		6k+4 : 2로 나누어 떨어짐
		6k+5 : 소수 가능성 있음
	따라서, 2와 3으로 나누어 떨어지는 수를 미리 제외하고, 반복문에서 나머지 후보인 6k+1과 6k+5(6k-1)만을 확인

*/
bool isPrime(long long num) {
	if (num <= 1)    // 0과 1은 소수가 아님
		return false;
	
	// 2와 3의 배수는 먼저 판단하여 최적화 (이후 반복문을 수행할 필요 없도록)
	if (num == 2 || num == 3)
		return true;
	else if (num % 2 == 0 || num % 3 == 0)
		return false;

	// 2와 3의 배수는 앞서 확인하므로, 6k+1과 6k-1만을 확인 : 5 7 11 13 17 19 23 (25) 29 31 (35) 37 
	for (long long i = 5; i * i <= num; i += 6) {
		if (num % i == 0 || num % (i+2) == 0)    // or 연산 필요
			return false;
	}
	return true;
}

int main() {
	fastio;

	int T;
	cin >> T;

	while (T--) {
		long long n;
		cin >> n;    // 0 <= n <= 40억

		while (!isPrime(n))
			n++;
		cout << n << '\n';
	}

	return 0;
}