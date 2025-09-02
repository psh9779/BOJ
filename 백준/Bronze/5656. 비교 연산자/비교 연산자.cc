#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string op;
	int num1, num2;

	int cnt = 1;
	bool result;
	while (1) {
		cin >> num1 >> op >> num2;

		if (op == "E")
			break;

		if (op == ">")
			result = (num1 > num2);
		else if (op == ">=")
			result = (num1 >= num2);
		else if (op == "<")
			result = (num1 < num2);
		else if (op == "<=")
			result = (num1 <= num2);
		else if (op == "==")
			result = (num1 == num2);
		else if (op == "!=")
			result = (num1 != num2);

		cout << "Case " << cnt++ << ": " << (result ? "true" : "false") << '\n';    // 삼항연산자는 <<연산자보다 우선순위가 낮기에 괄호 필수
	}
	
	return 0;
}	