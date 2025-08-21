#include <iostream>
using namespace std;

int main(void) {
	string slogan;
	cin >> slogan;

	if (slogan.compare("SONGDO") == 0)    // std::string 클래스는 ==연산자를 오버로딩해두어 compare() 호출을 대신할 수 있다.
		cout << "HIGHSCHOOL\n";
	else if (slogan.compare("CODE") == 0)    // 즉, else if (slogan == "CODE")가 가능하다.
		cout << "MASTER\n";
	else if (slogan.compare("2023") == 0)
		cout << "0611\n";
	else if (slogan.compare("ALGORITHM") == 0)    // else로 처리해도 되는듯 함
		cout << "CONTEST\n";

	return 0;
}