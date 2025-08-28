#include <iostream>
using namespace std;

int main() {
	int sum = 2, X, left, right;
	cin >> X;

	// 몇번째(cnt) 대각선의 몇번째(X) 분수인지 cnt, X를 각각 계산
	int cnt = 1;
	while (X > cnt) {
		X -= cnt;
		cnt++;
	}

	// cnt번째 대각선의 X번째 분수를 계산
	sum += (cnt - 1);    // cnt번째 대각선에 해당하는 분수의 분자 분모의 합 계산

	if (!(sum % 2)) {    // sum이 짝수인 경우
		left = cnt + 1 - X;
		right = sum - left;    // left 값을 우선 계산하면 right값 정의는 쉬워짐
	}
	else { // sum이 홀수인 경우
		right = cnt + 1 - X;
		left = sum - right;    // right 값을 우선 계산하면 left값 정의는 쉬워짐
	}
	cout << left << '/' << right << '\n';

	return 0;
}