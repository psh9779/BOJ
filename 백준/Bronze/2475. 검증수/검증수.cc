#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int num, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num * num;
	}
	cout << sum % 10 << '\n';
	
	return 0;
}