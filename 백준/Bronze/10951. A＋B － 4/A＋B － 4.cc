#include <iostream>
using namespace std;

int main(void) {
	int A, B;
	while (cin >> A >> B){
		cout << A + B << '\n';
	}

	return 0;
}

/* cin의 eof() 함수를 활용

int main() {
	int a, b;
	while (!(cin >> a >> b).eof()) {    // eof 입력 시 false로 판단
		cout << a + b << '\n';
	}

	return 0;
}

int main() {
	int a, b;
	while (1) {
		cin >> a >> b;
		if (cin.eof()) break;    // eof 입력 시 false로 판단
		cout << a + b << '\n';
	}

	return 0;
}
*/