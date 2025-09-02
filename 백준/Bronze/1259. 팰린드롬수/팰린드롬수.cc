#include <iostream>
#include <string>
using namespace std;

// 입력 : 각 줄마다 1이상 99999 이하의 정수가 주어지며, 입력의 마지막 줄에는 0이 주어지고 이 줄은 문제에 포함 X
// 출력 : 각 줄마다 주어진 수가 팰린드롬수이면 'yes'를, 아니면 'no'를 출력
int main() {
	int temp;
	while (true) {
		cin >> temp;
		if (temp == 0)
			break;

		string test_num = to_string(temp);
		bool isPalindrome = true;
		for (int i = 0; i < test_num.length() / 2; i++)
			if (test_num[i] != test_num[test_num.length() - i - 1])
				isPalindrome = false;

		cout << (isPalindrome ? "yes\n" : "no\n");    // C++에서 << 연산자가 ?: 삼항 연산자보다 우선순위가 높음에 주의
	}

	return 0;
}