#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	char arr[5][15] = { 0 };    // 2차원 char형 배열의 모든 요소를 0으로 초기화
	for (int i = 0; i < 5; i++) {
		cin >> s;
		for (int j = 0; j < s.length(); j++)
			arr[i][j] = s[j];
	}

	for (int p = 0; p < 15; p++) {
		for (int q = 0; q < 5; q++) {
			if (arr[q][p] != 0)    // if(arr[q][p] != '\0')과 동일
				cout << arr[q][p];
		}
	}
	cout << '\n';

	return 0;
}

/* vector를 이용한 코드
*/