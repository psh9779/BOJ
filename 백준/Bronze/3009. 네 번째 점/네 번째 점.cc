#include <iostream>
using namespace std;

// 유일한 값을 찾는 함수
int unique(int a, int b, int c) {
	if (a == b)
		return c;
	else if (b == c)    // a != b이고 b == c인 경우 (따라서, a != c이기도 함)
		return a;
	else    // a != b이고 b != c인 경우. 즉, a == c
		return b;
}

int main() {
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	cout << unique(x1, x2, x3) << ' ' << unique(y1, y2, y3) << '\n';

	return 0;
}