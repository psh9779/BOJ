#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	
	int N; cin >> N;
	bool isGold = true;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		int points, fouls;
		cin >> points >> fouls;
		if (5 * points - 3 * fouls <= 40)
			isGold = false;
		else
			cnt++;
	}

	cout << cnt << (isGold ? "+\n" : "\n");

	return 0;
}