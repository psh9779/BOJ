#include <iostream>
#include <string>
using namespace std;

// 문자열의 시작과 끝이 큰따옴표로 이루어져 있는지 확인하는 문제
// 입력 조건 1. 문자열 S는 50글자를 넘지 않으며, 영어 대소문자와 큰따옴표 그리고 공백으로 이루어짐
// 입력 조건 2. 큰 따옴표는 전체 문자열에서 2개 이하만큼 존재
// 입력 조건 3. 큰따옴표 안에 있는 문자열 앞뒤에 공백이 주어지는 경우나 문자열의 시작과 끝에 공백이 주어지는 경우는 X

// 출력 조건 : 정확한 문자열이면 큰따옴표 내부 문자열을 출력, 정확한 문자열이 아니거나 큰따옴표 내부가 빈 문자열이면 CE를 출력


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	getline(cin, S);    // 공백을 포함한 한 줄 입력

	if (S.length() <= 2)    // 입력된 문자열의 길이가 2 이하인 경우 (""으로된 빈 문자열 포함)
		cout << "CE\n";
	else if (S[0] != '\"' || S[S.length() - 1] != '\"')    // 문자열 양 끝 중 하나라도 큰따옴표가 아닌 경우
		cout << "CE\n";
	else {
		for (int i = 1; i < S.length() - 1; i++)
			cout << S[i];
		cout << '\n';
	}

	return 0;
}