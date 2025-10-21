#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

// 1 1 1 1+1 1+1 여기서부터 규칙 발생  1+2 1+3 1+4 2+5 2+7 3+9 4+12 + 5+16
// P[1] P[2] P[3] P[4]까지는 값을 정해야할듯
// P[n] = P[n-5] + P[n-1] (단, n >= 6)
int main() {
	fastio;

	int T; cin >> T;
	ll P[101];
	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;
	P[5] = 2;
	
	for (int i = 6; i <= 100; i++)
		P[i] = P[i - 5] + P[i - 1];

	while (T--) {
		int N; cin >> N;
		cout << P[N] << '\n';
	}

	return 0;
}