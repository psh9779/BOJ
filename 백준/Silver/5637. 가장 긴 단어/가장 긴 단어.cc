#include <iostream>
#include <string>
#include <cctype>    // isalpha()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	string max_str;
	while (1) {
		string temp;
		cin >> temp;

		if (temp == "E-N-D")
			break;

		string res;
		int str_size = temp.length();
		for (int i = 0; i < str_size; i++) {
			if (isalpha(temp[i]) || temp[i] == '-')
				res += temp[i];
		}

		if (max_str.length() < res.length())
			max_str = res;
	}

	for (int j = 0; j < max_str.length(); j++) {
		if (max_str[j] >= 'A' && max_str[j] <= 'Z')
			max_str[j] = max_str[j] - 'A' + 'a';
		cout << max_str[j];
	}
	cout << '\n';

	return 0;
}