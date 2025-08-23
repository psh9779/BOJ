#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char word;
	cin >> word;

	// C++에서는 출력 서식 지정자가 출력 형식을 결정하는 C와 달리, 변수 타입(char, int)이 출력 형식을 결정한다.
	cout << int(word) << '\n';

	return 0;
}