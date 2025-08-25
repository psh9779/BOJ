#include <iostream>
using namespace std;

int main(void) {
	int res[6] = { 1,1,2,2,2,8 };
	int input[6];

	for (int i = 0; i < 6; i++) {
		cin >> input[i];    // char 배열과 달리, int 배열은 직접 반복해서 입력받아야 함
		if (i > 0) cout << ' ';
		cout << res[i] - input[i];
	}
	cout << '\n';
	return 0;
}