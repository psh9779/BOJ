#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> level(N);
	for (int i = 0; i < N; i++)
		cin >> level[i];

	sort(level.begin(), level.end(), greater<>());    // 내림차순 정렬

	int cnt = (N > 42 ? 42 : N), sum = 0, up_power = 0;
	for (int j = 0; j < cnt; j++) {
		sum += level[j];
		if (level[j] >= 250)
			up_power += 5;
		else if (level[j] >= 200)
			up_power += 4;
		else if (level[j] >= 140)
			up_power += 3;
		else if (level[j] >= 100)
			up_power += 2;
		else if (level[j] >= 60)
			up_power += 1;
	}
	cout << sum << ' ' << up_power << '\n';

	return 0;
}