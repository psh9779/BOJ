#include <iostream>
using namespace std;

int main() {
	int A = -1, B = -1;

	while (1) {
		cin >> A >> B;    // A와 B는 각각 서로 다른 10000 이하의 자연수

		if (A + B == 0)
			break;

		if (A % B == 0) cout << "multiple\n";
		else if (B % A == 0) cout << "factor\n";
		else cout << "neither\n";
	}
	return 0;
}