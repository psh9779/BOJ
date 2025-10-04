#include <iostream>
#include <cmath>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int T;
	cin >> T;

	// 1부터 10^9까지 더하는 최악의 경우 -> (1+10^9)*10^9/2이므로, long long 범위(약 10^18)내에 포함됨
	// n부터 m까지의 모든 정수의 합 == (n+m)*(m-n+1)/2.    이는 n<=m인 모든 정수범위에서 성립
	for(int i = 1; i <= T; i++){
		long long res;
		long long n, m; cin >> n >> m;
		
		res = (n + m) * (m - n + 1) / 2;

		cout << "Scenario #" << i << ":\n";
		cout << res << "\n\n";
	}

	return 0;
}