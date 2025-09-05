#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 2017인 정수

	cout << N * (N - 1) << '\n';    // nC1 * n-1C1 출력

	return 0;
}