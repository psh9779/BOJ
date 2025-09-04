#include <iostream>
#include <string>    // getline(), find()
using namespace std;

// 초기 생각 : 키보드의 가능한 문자들을 2차원 char 배열에 저장하려했으나, 행마다 길이가 다름 -> 따라서 시도 X
// `,Q,A,Z,Ctrl, BackSp, Alt, Tab 키들은 입력으로 올 수 없으며, Spacebar는 예외적으로 오류를 범하지 않음
/* 따라서, 입력 및 출력으로 가능한 문자들은 다음과 같음 (스페이스바는 따로 처리)
	`1234567890-=
	QWERTYUIOP[]\\
	ASDFGHJKL;\'
	ZXCVBNM,./
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string keyboard_words = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
	string fault_str;
	
	while (getline(cin, fault_str)) {    // EOF에 도달한 경우 반복문 탈출
		for (int cnt = 0; cnt < fault_str.length(); cnt++) {
			if (fault_str[cnt] == ' ')
				cout << ' ';
			else
				cout << keyboard_words[keyboard_words.find(fault_str[cnt]) - 1];
		}
		cout << '\n';
	}
	return 0;
}