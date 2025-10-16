#include <iostream>
#include <vector>
#include <algorithm>    // std::reverse()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, K; cin >> N >> K;

	vector<int> cows(N);
	for (int i = 0; i < N; i++) {
		cows[i] = i + 1;
	}

	int A1, A2, B1, B2;
	cin >> A1 >> A2 >> B1 >> B2;

	vector<vector<int>> match;
	match.push_back(cows);

	while (1) {
		reverse(cows.begin() + A1 - 1, cows.begin() + A2);
		reverse(cows.begin() + B1 - 1, cows.begin() + B2);

		if (match[0] != cows)
			match.push_back(cows);
		else
			break;
	}
	
	int match_size = match.size();
	vector<int> res = match[K % match_size];

	for (int x : res)
		cout << x << '\n';

	return 0;
}