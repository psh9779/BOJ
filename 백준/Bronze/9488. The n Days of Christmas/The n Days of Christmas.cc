#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

ll A[1000001];
ll S[1000001];
int main() {
	fastio;

	for (int i = 1; i <= 1000000; i++) {
		A[i] = A[i - 1] + i;    // i번째 날에 추가로 받는 선물 개수
		S[i] = S[i - 1] + A[i];    // i번째 날에 받는 총 선물 개수
	}

	int n;
	while (1) {
		cin >> n;
		
		if (n == 0)
			break;

		cout << S[n] << '\n';
	}

	return 0;
}