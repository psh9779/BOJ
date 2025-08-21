#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char letters[1000001];
	cin >> letters;

	for (int i = 0; letters[i] != '\0'; i++)    // '\0' == 널 문자 (문자 0) / NULL = 널 포인터 (주소 0)
		cout << char(letters[i] - 'a' + 'A');
	cout << '\n';

	return 0;
}