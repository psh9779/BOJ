#include <iostream>
using namespace std;

int main() {
	int a, b, c, answer;
	cin >> a >> b >> c;

	if (b >= c)
		answer = -1;
	else
		answer = a / (c - b) + 1;    // 몫 연산자의 결과는 정수형임(소수를 자동으로 내림(floor) 값)을 이용
	cout << answer;
	return 0;
}