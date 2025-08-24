#include <iostream>
using namespace std;

int main(void) {
	int result_max = 0, result_cnt = 0, num;
	for (int i = 1; i <= 9; i++) {
		cin >> num;
		if (result_max < num) {
			result_max = num;
			result_cnt = i;
		}
	}
	cout << result_max << '\n' << result_cnt << '\n';

	return 0;
}