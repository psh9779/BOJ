#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 규칙 : 1, 1+6, 1+6+(6+6), 1+6+(6+6)+(6+6+6), 1+6+(6+6)+(6+6+6)+(6+6+6+6), ... 
	int N, cnt = 0;
	cin >> N;

	while (N > 0) {
		if (cnt > 0)
			N -= 6 * cnt;
		else
			N -= 1;
		cnt++;
	}
	cout << cnt << '\n';

	return 0;
}