#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// reqular box에는 8개의 cupcake이 들어있음
	// small box에는 3개의 cupcake이 들어있음
	// 28명의 학생들에게 하나씩 빠짐없이 주고 남은 개수는?

	int r_box, s_box;
	cin >> r_box >> s_box;
	cout << r_box * 8 + s_box * 3 - 28 << '\n';

	return 0;
}