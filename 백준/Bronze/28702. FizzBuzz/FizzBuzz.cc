#include <iostream>
#include <string>
using namespace std;

// 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz ...
// 즉, 연속으로 출력된 세 개의 문자열 중 최소 하나는 숫자 문자열임이 보장됨
// 연속으로 나타나는 숫자 3개가 모두 (Fizz,Buzz,FizzBuzz)에 해당되는 경우는 없음
string fizzbuzz(int x) {
	if (x % 3 == 0 && x % 5 == 0)
		return "FizzBuzz";
	if (x % 3 == 0)
		return "Fizz";
	if (x % 5 == 0)
		return "Buzz";
	
	return to_string(x);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string input[3];
	int res = 0;
	for (int i = 0; i < 3; i++)
		cin >> input[i];


	for(int j = 0; j < 3; j++){
		if (input[j] != "Fizz" && input[j] != "Buzz" && input[j] != "FizzBuzz") {
			res = stoi(input[j]) + 3 - j;
			break;
		}
	}

	// 출력해야할 값은 입력으로 주어진 세 문자열 다음에 올 문자열
	cout << fizzbuzz(res) << '\n';

	return 0;
}