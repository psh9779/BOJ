#include <iostream>

int main(void) {
	int X, N, a, b;
	int sum = 0;

	std::cin >> X >> N;
	
	for (int i = N; i > 0; i--) {
		std::cin >> a >> b;
		sum += a * b;
	}

	std::cout << ((sum == X) ? "Yes" : "No") << std::endl;

	return 0;
}