#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int X;
	cin >> X;    // 1 <= X <= 64

	int stick_len = 64, cnt = 0;
	while (X) {
		if (X >= stick_len) {
			X -= stick_len;
			cnt++;
		}
		stick_len /= 2;
	}
	cout << cnt << "\n";

	return 0;
}



/* 이진 탐색을 이용한 풀이
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int stick_len = 64;
	int X;
	cin >> X;

	int low = 0, high = stick_len, cnt = 0;

	// 현재 문제 상황에서, 타겟 X는 무조건 찾는 값임
	while (low <= high) {
		int mid = (low + high) / 2;
		if (mid < X) {
			low = mid + 1;
			cnt++;    // 이때만 ++연산
		}
		else if (mid > X) {
			high = mid;
		}
		else {    // mid == X. 즉, 타겟 X를 찾은 경우
			cnt++;
			break;
		}
	}
	cout << cnt << '\n';

	return 0;
}
*/
