#include <iostream>
#include <cmath>    // 거듭제곱을 계산하는 pow() 사용을 위해
using namespace std;

// 0 입력 시 종료
// 1 + x + x^2 + x^3 + x^4의 값을 계산하라는 문제
// 등비수열의 합공식 이용 -> x값의 범위에 따라 계산이 다름 (0 < x < 1, x == 1, x > 1)
// 따라서 3가지 Case 분류 필요
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double Input;    // 0 이상의 실수를 입력받으므로
	
	cout << fixed;    // 소수점 자리 고정시키기
	cout.precision(2);    // 소수점 2자리까지 반올림해서 출력되게 함

	while (1) {
		cin >> Input;

		if (Input == 0) break;
		else if (Input < 1) cout << (pow(Input, 5) - 1) / (1 - Input) << '\n';    // 0 < Input < 1인 경우
		else if (Input == 1) cout << Input * 5 << '\n';    // Input == 1인 경우
		else cout << (pow(Input, 5) - 1) / (Input - 1) << '\n';    // Input > 1인 경우
	}

	return 0;
}