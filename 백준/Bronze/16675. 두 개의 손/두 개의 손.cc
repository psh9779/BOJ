#include <iostream>
using namespace std;

// 가위바위보의 승패를 결정하는 함수
bool wins(char a, char b){
	// a가 b를 이기면 true, 그렇지 않으면 false
	return (a == 'S' && b == 'P') || (a == 'R' && b == 'S') || (a == 'P' && b == 'R');
}

int main() {
	char ML, MR, TL, TR;
	cin >> ML >> MR >> TL >> TR;

	// 민성이가 반드시 이기는 경우 (민성이의 2개의 손 중 하나가 태경이의 두 손을 모두 이기는 경우)
	bool M_win = (wins(ML, TL) && wins(ML, TR)) || (wins(MR, TL) && wins(MR, TR));
	
	// 태경이가 반드시 이기는 경우 (태경이의 2개의 손 중 하나가 민성이의 두 손을 모두 이기는 경우)
	bool T_win = (wins(TL, ML) && wins(TL, MR)) || (wins(TR, ML) && wins(TR, MR));

	// 결과 출력
	if (M_win)
		cout << "MS\n";
	else if (T_win)
		cout << "TK\n";
	else
		cout << "?\n";

	return 0;
}