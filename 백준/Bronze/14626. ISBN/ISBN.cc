#include <iostream>
#include <string>
using namespace std;

int main(){
	string ISBN;
	cin >> ISBN;

	// 마지막 요소값인 체크기호가 n이면 앞에것들의 합을 10으로 나눈 나머지가 10-n이어야 하는것
	// 단, n = 0이면 앞에것들의 합을 10으로 나눈 나머지는 0.
	int check = ISBN[12] - '0', res, cnt, sum = 0;

	for (int i = 0; i < 12; i++) {
		if (ISBN[i] != '*') {
			if ((i + 1) % 2)
				sum += 1 * (ISBN[i] - '0');
			else
				sum += 3 * (ISBN[i] - '0');
		}
		else {    // 훼손된 숫자 *는 반드시 하나 존재하므로 cnt는 무조건 초기화 됨이 보장
			if ((i+1) % 2)
				cnt = 1;
			else
				cnt = 3;
		}
	}
	
	for (int j = 0; j < 10; j++) {
		if ((sum + cnt * j) % 10 == (10-check) % 10) {
			res = j;
			break;
		}
	}
	cout << res << '\n';

	return 0;
}