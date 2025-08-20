#include <iostream>

int main(void) {
	int H, M;
	std::cin >> H >> M;
	if (M >= 45) {
		M -= 45;
	}
	else if (H == 0) {
		H = 23;
		M = M + 60 - 45;
	}
	else{
		H -= 1;
		M = M + 60 - 45;
	}
	std::cout << H << ' ' << M << std::endl;

	return 0;
}