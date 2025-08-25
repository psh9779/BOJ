#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	cin >> s;

	int cnt = 0;

	for (int i = s.length() - 1; i >= 0;) {
		if (i == 0) {
			i--;
			cnt++;
			continue;
		}

		if (i >= 2) {
			if (s[i] == '=' && s[i - 1] == 'z') {
				if (s[i - 2] == 'd')
					i -= 3;
				else
					i -= 2;

				cnt++;
				continue;
			}
		}
		
		if (i >= 1) {
			if (s[i] == '=' && (s[i - 1] == 'c' || s[i - 1] == 's' || s[i - 1] == 'z'))
				i -= 2;
			else if (s[i] == '-' && (s[i - 1] == 'c' || s[i - 1] == 'd'))
				i -= 2;
			else if (s[i] == 'j' && (s[i - 1] == 'l' || s[i - 1] == 'n'))
				i -= 2;
			else
				i--;
		}

		cnt++;
	}
	cout << cnt << '\n';
	
	return 0;
}