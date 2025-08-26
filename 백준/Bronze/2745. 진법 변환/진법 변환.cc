#include <iostream>
#include <string>

using namespace std;

// B값의 cnt제곱을 value에 곱셈하는 함수
int getSquare(int value, int B, int cnt) {    // value는 기존 값, B는 곱해지는 값, cnt는 곱해지는 횟수
	int result = value;
	for (int i = 0; i < cnt; i++)
		result *= B;
	return result;
}

int main() {
	// B진법 수 N을 10진법으로 바꾸면, 항상 10보다 작거나 같다는 입력 조건이 존재
	// 즉, 입력으로 들어오는 N과 B가 그런 조건을 만족하는 데이터만 주어진다는 뜻
	// 따라서, 출력값을 저장할 res 변수의 자료형을 int로 선언
	int B, temp, res = 0;
	string N;

	cin >> N >> B;

	for (int i = 0; i < N.length(); i++) {
		if (N[i] >= 'A' && N[i] <= 'Z')
			temp = N[i] - 'A' + 10;    // char 값들은 사칙 연산지 int형으로 자동 형변환됨
		else if (N[i] >= '0' && N[i] <= '9')
			temp = N[i] - '0';
		res += getSquare(temp, B, N.length() - i - 1);    // N[i]값은 0부터 9 또는 A부터 Z까지이므로 temp는 무조건 초기화 됨
	}
	cout << res << '\n';

	return 0;
}

/* 다른 코드 1
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string N;
	int B;
	cin >> N >> B;

	int value, result = 0;
	for (char c : N) {
		if (c >= '0' && c <= '9')
			value = c - '0';
		else if (c >= 'A' && c <= 'Z')
			value = c - 'A' + 10;
		result = result * B + value;    // 진법 변환의 수학적 포인트!!!!!
	}
	cout << result << '\n';

	return 0;
}
*/

/* 다른 코드 2
- #include <cmath>;를 선언하여 pow(n,count) 함수를 이용할 수도 있다.
*/