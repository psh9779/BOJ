#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;    // 1 <= w, h <= 1000이고 1 <= x <= w-1, 1 <= y <= h-1임. 따라서 1사분면에서만 생각
	cin >> x >> y >> w >> h;

	// 1 <= x <= w-1이고, 1 <= y <= h-1임
	// 따라서, x, y, h-y, w-x값 중 최솟값을 구하면 됨

	int min_val = (x <= y) ? x : y;
	min_val = (min_val <= h - y) ? min_val : h - y;
	min_val = (min_val <= w - x) ? min_val : w - x;

	cout << min_val << '\n';
	
	return 0;
}



/* <algorithm>의 std::min() 함수 사용하는 코드
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min_val = min({ x, y, w - x, h - y });    // std::min 함수는 세 개 이상의 값을 비교할 땐 initializer list 형태로 넘겨줘야 함
	cout << min_val << '\n';

	return 0;
}
*/