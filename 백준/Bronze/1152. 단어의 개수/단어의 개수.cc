#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	getline(cin, input);

	int result = 1;
	if (input.length() == 1 && input == " ")
		result = 0;
	else if (input.length() > 1) {
		for (int i = 1; i < input.length() - 1; i++)
			if (input[i] == ' ')
				result++;
	}
	cout << result << '\n';

	return 0;
}