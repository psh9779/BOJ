#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, K;
	cin >> N >> K;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	int sum = 0;
	for (int j = 0; j < K; j++)
		sum += v[j];    // 처음 구간합 구하기
	
	int max_res = sum;
	// 슬라이딩 윈도우 방식으로 계산 (새 원소 추가, 오래된 원소 제거)
	for (int t = K; t < N; t++) {
		sum += v[t] - v[t - K];
		max_res = max(sum, max_res);
	}
	cout << max_res << '\n';

	return 0;
}