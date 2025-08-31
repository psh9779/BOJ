#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, max_sum = 0, arr[101];    // 3 <= N <= 100, 10 <= M <= 300,000
	cin >> N >> M;

	for (int cnt = 1; cnt <= N; cnt++)
		cin >> arr[cnt];

	for (int i = 1; i <= N - 2; i++) {
		for (int j = i + 1; j <= N - 1; j++) {
			for (int k = j + 1; k <= N; k++) {
				int sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && sum > max_sum)
					max_sum = sum;
			}
		}
	}
	cout << max_sum << '\n';
	
	return 0;
}