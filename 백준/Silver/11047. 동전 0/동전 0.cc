#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, K;
	cin >> N >> K;

	vector<int> coin_value(N);
	for (int i = 0; i < N; i++)
		cin >> coin_value[i];

	int min_coin_cnt = 0;
	for (int j = N - 1; j >= 0 && K > 0; j--) {    // K == 0이면 조기 종료가 가능함
		min_coin_cnt += K / coin_value[j];
		K %= coin_value[j];
	}
	cout << min_coin_cnt;
	
	return 0;
}
