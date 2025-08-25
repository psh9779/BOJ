#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B, C;
	cin >> A >> B >> C;

	cout << stoi(A) + stoi(B) - stoi(C) << '\n';
	cout << stoi(A + B) - stoi(C) << '\n';
	
	return 0;
}

/* 다른 풀이 : stoi()를 사용하지 않고 풀이하는 방법
#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	int n = 1;
	int temp = B;
	while (temp != 0) {
		temp /= 10;
		n *= 10;
	}
	cout << A + B - C << '\n' << A * n + B - C << '\n';

	return 0;
}
*/