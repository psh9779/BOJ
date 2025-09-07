#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		vector<char> v;
		string temp;
		cin >> temp;

		for (int j = 0; j < temp.length(); j++) {
			char c = temp[j];
			if (c == '(')
				v.push_back(c);
			else if (c == ')') {
				if (!v.empty() && v.back() == '(')
					v.pop_back();
				else
					v.push_back(c);    // 쌍이 안맞는경우 그냥 집어넣어서 벡터가 비워지지 않게 함
			}
		}
		cout << (v.empty() ? "YES\n" : "NO\n");
	}

	return 0;
}