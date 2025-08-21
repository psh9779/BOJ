#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char letters[1000001];
	cin >> letters;

	for (int i = 0; letters[i] != '\0'; i++)    // '\0' == 널 문자 (문자 0) / NULL = 널 포인터 (주소 0)
		cout << char(letters[i] - 'a' + 'A');
	cout << '\n';

	return 0;
}


/*
* C++ 스러운 코드
* 하지만, 정적 배열을 사용하는 위의 코드와 달리, std::string은 내부적으로 동적 메모리 할당/확장 -> 오버헤드가 발생
* 또한, 위의 코드는 직접 아스키값을 계산하는 단순 연산이지만, 현재 코드는 toupper() 함수를 호출하여 분기 + 함수호출 오버헤드가 발생
* 따라서, 위의 코드가 더 빠르지만 현재 코드가 더 안전하고 C++스러움
#include <iostream>
#include <string>    // std::string을 쓰려면 원칙적으로는 포함. 하지만, <iostream> 안에서 <string>을 내부적으로 포함하는 구현이 많아 빼도 컴파일이 되는 경우가 흔하다고 함

using namespace std;

int main() {
	string str;    // str은 std::string 타입. 따라서, 동적 크기 관리를 통해 입력 크기와 상관없이 자동으로 늘어남. 또한, 항상 마지막에 '\0' 자동 보장
	cin >> str;

	// auto 키워드는 컴파일 시점에 컴파일러가 타입을 자동 추론
	// std::string은 내부적으로 char 배열을 관리하는 컨테이너
	// 따라서, "range-based for문"에서 ch (각 원소)의 타입은 char.
	for (auto &ch : str) {    // 참조(&), 원본 수정 가능
		ch = toupper(ch);
	}
	
	//  다음 반복문과 동일한 의미
	//  for (int i = 0; i < str.size(); i++) {
	//		str[i] = toupper(str[i]);
	//  }

	cout << str;

	return 0;
}
*/
