// 다시 풀어볼 것

#include <iostream>
#include <string>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	
	string num;
	string str;
	bool minus = false;
	cin >> str;

	int total_len = str.size();
	int result = 0;
	
	// 연산자 뒤의 마지막 숫자값까지 계산되도록 하기위해 string 끝의 널문자를 만나는 경우도 포함해서 처리
	for (int i = 0; i <= total_len; i++) {
		if (str[i] == '-' || str[i] == '+' || str[i] == '\0') {
			if (minus)
				result -= stoi(num);
			else
				result += stoi(num);

			num = "";    // 빈문자열로 초기화
			if (str[i] == '-')
				minus = true;
		}
		else
			num += str[i];
	}
	cout << result << '\n';
	return 0;
}