#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, B;    // N은 10억보다 작거나 같은 자연수, 2 <= B <= 36
	cin >> N >> B;

	string res = "";
	// int를 char로 변환하고 char를 string으로 변환해서 string + string 덧셈을 하도록 함
	char temp;
	while (N > 0) {    // N이 0이 되면 종료된다는 "종료 조건 파악이 중요"
		if (N % B >= 10)
			temp = 'A' + N % B - 10;    // temp는 char형 변수이므로 char로 형변환되어 저장
		else    // 0 <= N%B <= 9인 경우
			temp = '0' + N % B;    // temp는 char형 변수이므로 char로 형변환되어 저장

		// ********** char + string 연산은 정의되어있지 않음. (단, string + char 연산은 지원함) **********
		res = string(1, temp) + res;    // char 변수를 string으로 변환하여 문자열 이어붙이기
		N /= B;
	}
	cout << res << '\n';
	
	return 0;
}

/* 약간 다른 코드 (** string + int 연산 시 동작 **)
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, B;
	string res;    // std::string 클래스 타입 변수를 선언하고 초기화하지 않으면 자동으로 빈 문자열 ""로 초기화 됨
	cin >> N >> B;

	while (N > 0) {
		int temp = N % B;
		if (0 <= temp && temp <= 9)
			res += temp + '0';    // temp + '0'의 결과는 int 리터럴. 하지만, string과 더해지는 연산자는 char 타입만 정의되어 있어서, int를 char로 좁혀서 암묵적으로 맞춰주는 것임
		else
			res += temp - 10 + 'A';    // string + (int -> char)의 연산이 동일하게 발생
		N /= B;
	}

	// res의 마지막 요소부터 역순으로 출력
	for (int i = res.length() - 1; i >= 0; i--)
		cout << res[i];
	cout << '\n';

	return 0;
}
*/