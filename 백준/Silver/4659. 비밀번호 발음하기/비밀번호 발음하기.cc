#include <iostream>
#include <string>
using namespace std;

bool isVowel(char temp) {
	switch (temp) {
	case 'a':
	case 'e':
	case 'o':
	case 'i':
	case 'u':
		return true;
	}
	return false;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	while (1) {
		string pw;
		cin >> pw;

		if (pw == "end")
			break;

		bool cond1 = false, cond2 = true, cond3 = true;
		int mo = 0, ja = 0;    // 연속되는 모음, 자음의 개수
		for (int i = 0; i < pw.length(); i++) {
			if (isVowel(pw[i])) {
				cond1 = true;    // 조건 1
				mo++;
				ja = 0;
			}
			else {
				ja++;
				mo = 0;
			}

			// 조건 2
			if (mo == 3 || ja == 3) {
				cond2 = false;
				break;
			}

			if (i > 0 && pw[i - 1] == pw[i] && pw[i] != 'e' && pw[i] != 'o') {
				cond3 = false;
				break;
			}
		}
		cout << '<' << pw << "> ";
		if (cond1 && cond2 && cond3)
			cout << "is acceptable.\n";
		else
			cout << "is not acceptable.\n";
	}
	
	return 0;
}