#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	// 연립방정식을 만족하는 정수 x,y는 유일하게 존재한다는 조건 有
	int res_x = (c * e - b * f) / (a * e - b * d);
	int res_y = (c * d - a * f) / (b * d - a * e);

	cout << res_x << ' ' << res_y << '\n';

	return 0;
}