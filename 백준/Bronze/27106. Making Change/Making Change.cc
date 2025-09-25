#include <iostream>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int P;
	cin >> P;    // 1 <= P <= 99

	P = 100 - P;    // 1 dollar가 되기 위해서는 "100 cent - 입력된 cent" 만큼의 금액이 필요

	int res25, res10, res5, res1;
	
	res25 = P / 25;
	P %= 25;
	
	res10 = P / 10;
	P %= 10;
	
	res5 = P / 5;
	P %= 5;
	
	res1 = P;

	cout << res25 << ' ' << res10 << ' ' << res5 << ' ' << res1 << '\n';

	return 0;
}