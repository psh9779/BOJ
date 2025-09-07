#include <iostream>
#include <string>    // getline()
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// 괄호 쌍이 균형을 이루는지만이 중요
	while (1) {
		vector<char> v;
		string temp_s;
		getline(cin, temp_s);    // 문자열의 길이는 100글자 이하

		// 입력의 종료 조건 처리
		if (temp_s == ".")
			break;

		// 벡터를 선언만 하고 아무런 요소도 추가하지 않은 상태에서 v.back()을 호출하면 런타임 에러가 발생함에 주의
		for (int cnt = 0; cnt < temp_s.length(); cnt++) {
			char c = temp_s[cnt];
			if (c == '(' || c == '[')
				v.push_back(c);
			else if (c == ')') {
				if (!v.empty() && v.back() == '(')    // 벡터가 비어있지 않고 마지막 요소가 '('인 경우 균형을 이룸
					v.pop_back();
				else
					v.push_back(c);    // 짝이 안맞기에 그대로 push하여 벡터가 비워지지 않게끔 함
			}
			else if (c == ']') {
				if (!v.empty() && v.back() == '[')    // 벡터가 비어있지 않고 마지막 요소가 '['인 경우 균형을 이룸
					v.pop_back();
				else
					v.push_back(c);    // 짝이 안맞기에 그대로 push하여 벡터가 비워지지 않게끔 함
			}
		}
		cout << (v.empty() ? "yes\n" : "no\n");
	}

	return 0;
}