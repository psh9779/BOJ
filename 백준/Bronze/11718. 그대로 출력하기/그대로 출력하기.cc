#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	for (int i = 0; i < 100; i++) {    // 입력은 최대 100줄
		if (!getline(cin, s)) break;    // EOF가 입력되면(Window에서는 ctrl+z) getline() 반환값은 false.
		cout << s << '\n';
	}

	return 0;
}