#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int N, max_profit = 0;
vector<int> T, P;

void BruteForce(int day, int cur_profit) {    // 시작일, 현재까지의 이익
	// 상담 날짜가 퇴사일을 넘으면 종료
	if (day > N + 1) return;

	max_profit = max(max_profit, cur_profit);
	
	for (int i = day; i <= N; i++) {
		if (i + T[i] <= N + 1) {
			BruteForce(i + T[i], cur_profit + P[i]);
		}
	}
}

int main() {
	fastio;

	cin >> N;
	T.resize(N + 1);
	P.resize(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> T[i] >> P[i];

	BruteForce(1, 0);    // 1일부터 시작

	cout << max_profit << '\n';

	return 0;
}