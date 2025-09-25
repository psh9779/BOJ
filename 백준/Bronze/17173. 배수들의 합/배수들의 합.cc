#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int N, M;
	cin >> N >> M;

	int arr[1001] = {};    // 모든 요소 0 초기화
	for (int i = 0; i < M; i++) {
		int K;
		cin >> K;
		
		// 1부터 N까지 반복하지 말고, "K의 배수만 반복"하면 더 효율적
		for (int j = K; j <= N; j += K)    // (N / K회만 반복)
			arr[j]++;
	}
	
	int res = 0;
	for (int k = 1; k <= N; k++) {
		if (arr[k])
			res += k;
	}
	cout << res << '\n';

	return 0;
}