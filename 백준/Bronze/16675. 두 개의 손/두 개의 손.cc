#include <iostream>
#include <string>
using namespace std;

int main(){
	char M_L, M_R, T_L, T_R;
	cin >> M_L >> M_R >> T_L >> T_R;

	// 6가지의 Case가 존재.
	// 이 중, 한 사람의 양손이 무조건 같은 동작을 취한 경우에만 승패를 확정지을 수 있음
	// 단, 4개의 손이 모두 같은 동작이면 승패 X

	// ex) 가위, 바위, 보를 A,B,C라고 하면 (A가 가위를 의미하고, B가 바위를 의미하고, C가 보를 의미하는건 아님)
	// Case 1 : AA / AA인 경우 -> 승패 X
	// Case 2 : AA / BB인 경우 -> A,B가 뭔지에 따라 승패가 결정됨
	// Case 3 : AA / AB인 경우 -> B가 A를 이기면 승패가 결정됨. B가 A를 못이기면 승패 X
	// Case 4 : AA / BC인 경우 -> BC를 든 사람이 무조건 승리.
	// Case 5 : AB / AB인 경우 -> 승패 X
	// Case 6 : AB / BC인 경우 -> 승패 X

	// 따라서, Case 1 ~ 4를 생각해서 코딩하면 될 듯. 이에 해당하지 않으면 "?" 출력으로 처리

	if (M_L == M_R && M_R == T_L && T_L == T_R)    // Case 1
		cout << "?\n";
	else if (M_L == M_R && T_L == T_R) {    // Case 2
		if ((M_L == 'S' && T_L == 'R') || (M_L == 'R' && T_L == 'P') || (M_L == 'P' && T_L == 'S'))
			cout << "TK\n";
		else if ((M_L == 'R' && T_L == 'S') || (M_L == 'P' && T_L == 'R') || (M_L == 'S' && T_L == 'P'))
			cout << "MS\n";
	}
	else if (M_L == M_R) {    // M_L == M_R이고, T_L != T_R인 경우
		// 민성이가 두 손 모두 같은 동작일 때, 태경이가 그 동작을 이기는 동작을 하나 가진 경우
		if ((M_L == 'S' && (T_L == 'R' || T_R == 'R')) || (M_L == 'R' && (T_L == 'P' || T_R == 'P')) || (M_L == 'P' && (T_L == 'S' || T_R == 'S')))
			cout << "TK\n";
		else    // 그렇지 않으면 승패는 결정되지 않음
			cout << "?\n";
	}
	else if (T_L == T_R) {    // M_L != M_R이고, T_L == T_R인 경우
		// 태경이가 두 손 모두 같은 동작일 때, 민성이가 그 동작을 이기는 동작을 하나 가진 경우
		if ((T_L == 'S' && (M_L == 'R' || M_R == 'R')) || (T_L == 'R' && (M_L == 'P' || M_R == 'P')) || (T_L == 'P' && (M_L == 'S' || M_R == 'S')))
			cout << "MS\n";
		else    // 그렇지 않으면 승패는 결정되지 않음
			cout << "?\n";
	}
	else    // Case 5,6
		cout << "?\n";

	return 0;
}