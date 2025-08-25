#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	string s;

	int res, cnt;
	for (int i = 0; i < T; i++) {
		cin >> s;
		res = cnt = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				cnt++;
				res += cnt;
			}
			else if (s[j] == 'X')
				cnt = 0;
		}
		cout << res << '\n';
	}

	return 0;
}