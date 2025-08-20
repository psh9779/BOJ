#include <iostream>

int main(void) {
	int n1, n2, n3;
	
	std::cin >> n1 >> n2 >> n3;

	if (n1 == n2 && n2 == n3)    // 모두 같은 수일 때 (Case 1)
		std::cout << 10000 + n1 * 1000 << std::endl;
	else if (n1 != n2 && n2 != n3 && n3 != n1) {    // 모두 다른 수일 때 (Case 3)
		if (n1 > n2)
			std::cout << ((n1 > n3) ? n1 * 100 : n3 * 100) << std::endl;
		else
			std::cout << ((n2 > n3) ? n2 * 100 : n3 * 100) << std::endl;
	}
	else {    // 같은 눈이 2개만 나오는 경우 (Case 2)
		if (n1 != n2)
			std::cout << ((n2 == n3) ? 1000 + n2 * 100 : 1000 + n1 * 100) << std::endl;
		else
			std::cout << 1000 + n1 * 100 << std::endl;
	}
	return 0;
}