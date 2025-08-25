#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;
	bool res = true;

	for (int i = 0; i < s.length() - i; i++)    // i < s.length() / 2로 써도 됨
		if (s[i] != s[s.length() - i - 1]) {
			res = false;
			break;
		}

	if (res) cout << 1 << '\n';
	else cout << 0 << '\n';

	return 0;
}