#include <iostream>
#include <string>
using namespace std;

int call_count = 0;    // count를 전역 변수로 선언하면, C++ 표준 라이브러리의 std::count 함수와 이름이 충돌하여 모호성(ambiguity)이 발생
int recursion(const string& s, int l, int r) {
	call_count++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s) {
	return recursion(s, 0, s.length() - 1);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	for (int cnt = 0; cnt < T; cnt++) {
		string temp;
		cin >> temp;
		call_count = 0;
		cout << isPalindrome(temp) << ' ' << call_count << '\n';
	}

	return 0;
}