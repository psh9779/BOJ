#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

// 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하기 위해서는, Pi를 오름차순으로 정렬해야 한다.
int main() {
	fastio;

	int N; cin >> N;
	
	vector<int> P_i(N + 1);
	for (int i = 1; i <= N; i++)
		cin >> P_i[i];

	sort(P_i.begin(), P_i.end());

	ll total_min = 0;
	vector<ll> S(N + 1, 0);
	for (int j = 1; j <= N; j++) {
		S[j] = P_i[j] + S[j - 1];
		total_min += S[j];
	}

	cout << total_min << '\n';

	return 0;
}