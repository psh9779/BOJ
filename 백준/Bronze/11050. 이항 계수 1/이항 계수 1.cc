#include <iostream>
using namespace std;

// nCk값을 구하기
// nCk == nCn-k == n! / (k! * (n-k)!)
/*
0C0 = 1
1C0 1C1 = 1 1
2C0 2C1 2C2 = 1 2 1
3C0 3C1 3C2 3C3 = 1 3 3 1
4C0 4C1 4C2 4C3 4C4 = 1 4 6 4 1
....
따라서, nCr == n-1Cr-1 + n-1Cr
*/
int B_C(int n, int r) {    // 이항계수 == Binomial Coefficient
	if (r == 0 || n == r)
		return 1;

	return B_C(n - 1, r - 1) + B_C(n - 1, r);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, K;    // 1 <= N <= 10, 0 <= K <= N
	cin >> N >> K;
	cout << B_C(N, K) << '\n';

	return 0;
}
