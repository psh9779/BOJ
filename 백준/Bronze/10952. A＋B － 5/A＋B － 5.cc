#include <iostream>
using namespace std;

int main(void) {
	int A, B;
	while (1) {
		cin >> A >> B;
		if (A + B == 0)    // 0 < A, B < 10인 조건 이용
			break;
		cout << A + B << '\n';
	}

	return 0;
}