#include <iostream>
using namespace std;

int main(void) {
	int temp, rest[42] = { 0 }, result = 0;    // 42로 나눈 나머지는 0부터 41까지
	
	for (int i = 0; i < 10; i++) {
		cin >> temp;
		rest[temp % 42] += 1;
	}

	for (int j = 0; j < 42; j++)
		if (rest[j] != 0) result++;

	cout << result << '\n';

	return 0;
}