#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;
	int T; cin >> T;

	// 규칙이 존재함 -> 이를 코드상에서 어떻게 저장하여 사용할지가 중요
		// a의 일의자리수가 2이면 a 거듭제곱의 마지막 일의자리수는 2, 4, 8, 6, ... 반복
		// a의 일의자리수가 3이면 3, 9, 7, 1, ... 반복
		// a의 일의자리수가 4이면 4, 6, ... 반복
		// a의 일의자리수가 1, 5, 6이면 각자 자기 자신 반복
		// a의 일의자리수가 7이면 7, 9, 3, 1, ... 반복
		// a의 일의자리수가 8이면 8 4 2 6, ... 반복
		// a의 일의자리수가 9이면 9, 1, ... 반복
		// a의 일의자리수가 0이면 0 반복

	int cycle[10][4] = {
		{10,10,10,10},
		{1,1,1,1},
		{2,4,8,6},
		{3,9,7,1},
		{4,6,4,6},
		{5,5,5,5},
		{6,6,6,6},
		{7,9,3,1},
		{8,4,2,6},
		{9,1,9,1}
	};

	while (T--) {
		int a, b;
		cin >> a >> b;
		
		int temp = a % 10;
		int idx;
		if (temp == 0 || temp == 1 || temp == 5 || temp == 6)
			idx = 0;
		else if (temp == 4 || temp == 9)
			idx = (b - 1) % 2;
		else
			idx = (b - 1) % 4;

		cout << cycle[temp][idx] << '\n';
	}

	return 0;
}