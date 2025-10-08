#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;
	
	vector<int> A(N);
	vector<int> dp(N, 1);
	
	for (int i = 0; i < N; i++)
		cin >> A[i];

	int max_n = 1;
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[j] > A[i])
				dp[i] = max(dp[j] + 1, dp[i]);
		}
		max_n = max(max_n, dp[i]);
	}
	cout << max_n << '\n';

	return 0;
}