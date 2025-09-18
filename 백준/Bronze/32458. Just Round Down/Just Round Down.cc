#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	float x;
	cin >> x;
	cout << (int)x << '\n';    // 소수점 아래를 버리고 정수값만 출력

	return 0;
}