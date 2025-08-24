#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string s;
	for (int i = 0; i < 100; i++) {    // 입력은 최대 100줄
		/*
		공백 포함 문자열을 입력->getline()
		EOF가 입력 시 (Window에서는 ctrl+z + enter) getline() 반환값은 false
		Windows 콘솔은 라인 버퍼 모드로 동작하므로 ctrl + z만으로는 EOF가 전달되지 않고,
		Enter를 눌러야 프로그램이 EOF를 인식함
		*/
		if (!getline(cin, s)) break;
		cout << s << '\n';
	}

	return 0;
}
