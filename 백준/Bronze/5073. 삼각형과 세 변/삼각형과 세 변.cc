#include <iostream>
#include <algorithm>    // std::max() 함수를 이용
using namespace std;

// 삼각형의 성립 조건 : "가장 긴변의 길이 < 나머지 두 변의 길이의 합"
int main() {
	int len_1, len_2, len_3;
	while (1) {
		cin >> len_1 >> len_2 >> len_3;

		int sum = len_1 + len_2 + len_3;
		if (sum == 0)    // 입력받는 세 변의 길이는 1000이하의 양의 정수. 따라서, 합이 0이면 "0 0 0" 입력임을 의미하므로 무한루프를 벗어남
			break;

		int max_val = max({ len_1, len_2, len_3 });    // 타입이 같은 여러개의 값 중 min, max를 찾고자 할 때 initializer list 방식을 사용

		if (sum <= 2 * max_val)    // 삼각형의 조건을 만족하지 않는 경우
			cout << "Invalid\n";
		else if (len_1 == len_2 && len_2 == len_3)
			cout << "Equilateral\n";
		else if (len_1 == len_2 || len_2 == len_3 || len_3 == len_1)
			cout << "Isosceles\n";
		else
			cout << "Scalene\n";
	}

	return 0;
}