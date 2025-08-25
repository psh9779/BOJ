#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;    // 100 이하의 자연수
	string s;

	cin >> N;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		bool isdup = false;
		cin >> s;
		
		for (int j = 0; j < s.length(); j++) {
			for (int k = j + 1; k < s.length() - 1; k++)
				if (s[j] != s[k] && s[j] == s[k + 1]) {
					if (!isdup) {
						isdup = true;
						break;
					}
				}
			if (isdup) break;
		}
		if (!isdup) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}