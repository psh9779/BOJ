#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	/* C++의 cin, cout은 C언어의 입출력함수인 scanf, printf와 동기화되어있음
	* cin과 scanf를 섞어 써도 문제가 없도록 하기 위해 속도를 일부러 느리게 맞춘 상태
	* cin과 cout만을 사용한다면 (섞어쓰지 않고) 굳이 동기화할 필요가 없음
	* 따라서, cin/cout이 더 빠르게 동작하기 위해 동기화를 끊는 코드가 ios::sync_with_stdio(false);임
	*/
	cin.tie(NULL);
	/*
	* 기본적으로 cin을 쓰기전에 자동으로 cout이 flush되도록 되어있음 (즉, cin과 cout이 tied되어있음)
	* 이는 화면에 출력이 밀리지 않도록 하기 위함 (입력받기 전에 출력버퍼의 내용을 비우기 위함)
	* 하지만, cin이 cout을 더 이상 기다리지 않고 독립적으로 동작하게 하면 입출력 속도가 더 빨라짐
	* 입출력을 엄청 많이 번갈아 할 때 속도가 빨라지도록 하지만, 출력이 밀려서 늦게 보일 수 있음
	* 이는 필요한 시점에 프로그래머가 출력 버퍼 비우기(flush)를 직접 관리하여 필요한 시점에 화면에 안 보이는 문제를 피할 수 있음
	*/

	int T;
	int A, B;

	cin >> T;

	while (T > 0) {
		cin >> A >> B;
		cout << A + B << '\n';    // endl은 flush를 포함하므로, 많은 반복에서 속도를 저하시킨다
		T--;
	}

	return 0;
}