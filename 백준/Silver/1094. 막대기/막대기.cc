#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int X;
	cin >> X;    // 1 <= X <= 64

	int stick_len = 64, cnt = 0;
	while (X){
		if (X >= stick_len) {
			X -= stick_len;
			cnt++;
		}
		stick_len /= 2;
	}
	cout << cnt << "\n";

	return 0;
}