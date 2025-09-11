#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a, b, user_value;    // user_value : 유저가 체감하는 몬스터의 방어율 수치
	cin >> a >> b;    // 몬스터의 방어율 수치 : a, 유저의 방어율 무시 : b

	user_value = a * (100 - b) / 100;
	cout << (user_value >= 100 ? "0\n" : "1\n");
	
	return 0;
}