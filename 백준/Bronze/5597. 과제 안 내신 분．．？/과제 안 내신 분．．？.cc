#include <iostream>
using namespace std;

int main(void) {
	int temp, num[31] = { 0 };

	for (int i = 1; i <= 28; i++) {
		cin >> temp;
		num[temp] = temp;
	}
	for (int j = 1; j <= 30; j++)    // for문 실행문은 if문 전체를 한줄로 취급
		if (num[j] == 0) cout << j << '\n';

	return 0;
}