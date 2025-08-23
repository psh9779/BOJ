#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, R;    // 최악의 경우 1000 * 8 * 20의 반복횟수 발생
	string S;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		string result = "";
		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < R; k++)
				result += S[j];
		}
		cout << result << '\n';
	}

	return 0;
}