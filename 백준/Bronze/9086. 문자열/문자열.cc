#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	string word;

	cin >> T;
	for (int i = 1; i <= T; i++) {
		cin >> word;
		cout << word[0] << word[word.length() - 1] << '\n';
	}

	return 0;
}