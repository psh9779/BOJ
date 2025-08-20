#include <iostream>

/*
* C++에서는 true와 false를 std::cout으로 출력하면 기본적으로 정수 형태로 변환되어 출력
* true -> 1, false -> 0 출력
* 특별히 std::boolalpha를 사용해야 문자 그대로 "true", "false"를 출력하게 됨
* 
* 추가로, 삼항 연산자(?:)는 << 연산자보다 늦게 평가되므로 삼항 연산자를 이용할 때 괄호로 묶어주는것에 주의
*/

int main(void) {
	int x, y;
	std::cin >> x >> y;
	if (x > 0)
		std::cout << ((y > 0) ? 1 : 4) << std::endl;
	else
		std::cout << ((y > 0) ? 2 : 3) << std::endl;

	return 0;
}