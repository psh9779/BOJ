#include <iostream>
#include <vector>
using namespace std;

int retGCD(int a, int b) {
	return (b == 0 ? a: retGCD(b, a%b));
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 3 <= N <= 100,000

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	int max_interval = v[1] - v[0];
	for (int j = 1; j < N - 1; j++) {
		int next_interval = v[j + 1] - v[j];
		max_interval = retGCD(max_interval, next_interval);
		if (max_interval == 1) break;    // 연산 최적화
	}
	
	int total_tree = (v[N - 1] - v[0]) / max_interval + 1;    // 핵심이 되는 계산식
	int new_tree = total_tree - N;
	cout << new_tree << '\n';

	return 0;
}