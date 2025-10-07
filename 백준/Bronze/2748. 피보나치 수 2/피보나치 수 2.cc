#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	int n; cin >> n;
	long long F[91] = {};    // 범위 초과 방지
	F[0] = 0;
	F[1] = 1;
	for (int i = 2; i <= 90; i++)
		F[i] = F[i - 1] + F[i - 2];

	cout << F[n] << '\n';

	return 0;
}