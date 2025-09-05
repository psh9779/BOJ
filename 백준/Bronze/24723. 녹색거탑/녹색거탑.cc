#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 5
	
	// N == x일 때, 경우의 수는 2^x == 2C1을 x회 곱한만큼의 횟수
	int res = 1;
	for (int cnt = 1; cnt <= N; cnt++)
		res *= 2;
	cout << res << '\n';

	return 0;
}