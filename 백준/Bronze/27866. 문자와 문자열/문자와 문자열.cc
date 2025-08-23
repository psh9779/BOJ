#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	int i;

	cin >> word >> i;
	cout << word[i - 1] << '\n';

	return 0;
}