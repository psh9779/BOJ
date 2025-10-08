#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int N;
bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void DFS(int n, int jarisu) {
	// 한자리 수의 경우, 바로 출력하고 소수판별은 하지 않음
	if (N == jarisu) {
		cout << n << '\n';
		return;
	}
	
	// 인자로 전달한 jarisu 값이 입력으로 받은 자릿수와 다른 경우
	for(int i = 1; i < 10; i += 2){    // 일의 자리수가 홀수인 경우만 확인
		if (isPrime(n * 10 + i))
			DFS(n * 10 + i, jarisu + 1);    //  자릿수를 증가시켜서 DFS 재귀 호출
	}
	
	return;
}

int main() {
	fastio;
	cin >> N;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

	return 0;
}