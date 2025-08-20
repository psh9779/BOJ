#include <iostream>

int main(void) {
	int n;
	int sum = 0;
	
	std::cin >> n;

	while (n >= 1) {
		sum += n;
		n -= 1;
	}
	std::cout << sum << std::endl;

	return 0;
}

/* 등차수열 합공식 이용한 방법 -> 수학적 접근
int main(void) {
	int n;
	std::cin >> n;
	std::cout << n * (n + 1) / 2 << std::endl;
	return 0;
}
*/
