#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string str;    // str은 ""으로 자동 초기화
	while (1) {
		getline(cin, str);

		if (str == "***")
			break;

		for (int i = str.length() - 1; i >= 0; i--)
			cout << str[i];
		cout << '\n';
	}

	return 0;
}