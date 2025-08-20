#include <iostream>

int main(void) {
	int N;
	
	std::cin >> N;

	for (int i = (N - 1) / 4 + 1; i > 0; i--) {
		std::cout << "long ";
	}
	std::cout << "int" << std::endl;

	return 0;
}