#include <iostream>

int main(void) {
	int A, B, C;
	std::cin >> A >> B;
	std::cin >> C;

	int total_H = A;
	int total_M = B + C;

	if (total_M >= 60) {
		total_H += total_M / 60;
		total_H = (total_H >= 24) ? total_H - 24 : total_H;
		total_M %= 60;
	}

	std::cout << total_H << ' ' << total_M << std::endl;

	return 0;
}