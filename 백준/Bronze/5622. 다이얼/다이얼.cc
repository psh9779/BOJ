// ABC는 2+1초. DEF는 2+2초, GHI는 2+3초... / WXYZ의 경우에만 따로 처리
// 'A'문자의 아스키값이 65이므로 65를 뺀 값의 3으로 나눈 몫으로 생각하면 됨
// A,B,C 의 경우, 0/3=0, 1/3=0, 2/3=0
// D,E,F 의 경우, 3/3=1, 4/3=1, 5/3=1
// 단, 그림 상 7번에는 P,Q,R,S가 위치하며, 9번에는 W,X,Y,Z가 위치하므로 예외 상황에 맞게 처리

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string word;
	cin >> word;    // 단어의 길이는 2이상 15이하임

	int res = 0;
	for (int i = 0; i < word.length(); i++) {
		// 시작 위치인 A,B,C를 누르는 시간은 3초
		if (word[i] >= 'W') res += 10;    // char 자료형끼리의 비교 연산시에도 int로 자동 승격됨
		else if (word[i] >= 'T') res += 9;
		else if (word[i] >= 'P') res += 8;
		else res += 3 + (word[i] - 'A') / 3;
	}
	cout << res;

	return 0;
}

/* 다른 코드
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int time[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10,10,10,10 };

	string s;
	int res = 0;
	cin >> s;

	for (int i = 0; i < s.length(); i++)
		res += time[s[i] - 'A'];    // char끼리 연산 시 자동으로 int로 형변환(승격)된다. -> CPU는 int 단위로 연산하는게 가장 효율적이기 때문
	cout << res << '\n';

	return 0;
}
*/