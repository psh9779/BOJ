#include <iostream>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input;
	getline(cin, input);

	int result = 1;    // 하나의 단어인 경우 양끝을 제외하고 공백이 존재할 수 없음
	if (input.length() == 1 && input[0] == ' ')    // 공백 문자만 입력된 경우. if(input == " ")와 동일
		result = 0;
	else if (input.length() > 1) {
		for (int i = 1; i < input.length() - 1; i++)    // [1]부터 [input.length()-1]번째까지에서 공백문자가 있는지만 확인!
			if (input[i] == ' ')
				result++;
	}
	cout << result << '\n';

	return 0;
}

/* 다른 풀이 : 일단 공백 개수를 모두 세고 마지막에 조건에 맞도록 소거하는 방식
#include <iostream>
#include <string>

using namespace std;
 int main() {
	 string str = "";
	 int count = 1;

	 getline(cin, str);

	 for (int i = 0; i < str.length(); i++)
		 if (str[i] == ' ') count++;    // 우선 모든 문자들을 반복하며 공백 개수만큼 증가

	 if (str[0] == ' ') count--;    // 처음이 공백 문자이면 -1
	 if (str[str.length() - 1] == ' ') count--;    // 마지막이 공백 문자이면 -1

	 cout << count;

	 return 0;
 }
 */


[Bronze II] Title: 단어의 개수, Time : 4 ms, Memory : 3680 KB - BaekjoonHub
