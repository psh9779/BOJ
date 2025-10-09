#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int N, max_profit = 0;
vector<pair<int, int>> v;

void DFS(int day, int cur_profit) {    // 시작일, 현재까지의 이익
	if (day == N + 1) {
		max_profit = max(max_profit, cur_profit);
		return;
	}

	if (day > N + 1)    // 퇴사일이 넘으면 종료
		return;

	// 오늘부터 상담을 시작하는 경우
	if (day + v[day].first <= N + 1)
		DFS(day + v[day].first, cur_profit + v[day].second);
	
	// 오늘부터 상담을 시작하지 않는 경우
	DFS(day + 1, cur_profit);
}

int main() {
	fastio;

	cin >> N;
	v.resize(N + 1);

	for (int i = 1; i <= N; i++)
		cin >> v[i].first >> v[i].second;

	DFS(1, 0);

	cout << max_profit << '\n';

	return 0;
}