#include <iostream>
#include <vector>
#include <algorithm>    // sort();
using namespace std;

// 모든 난이도 의견은 1 이상 30 이하이므로 양수만 고려
int retRound(double val) {
	if (val - (int)val >= 0.5)    // (int)로 casting : 소수점 이하 버림
		return (int)val + 1;
	return (int)val;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	int res = 0;
	if (n != 0) {
		vector<int> level(n);
		for (int i = 0; i < n; i++)
			cin >> level[i];

		sort(level.begin(), level.end());

		int delete_num = retRound(n * 0.15);

		int sum = 0;
		for (int j = delete_num; j < n - delete_num; j++)
			sum += level[j];

		int total = n - 2 * delete_num;
		res = retRound(double(sum) / total);
	}

	cout << res << '\n';

	return 0;
}