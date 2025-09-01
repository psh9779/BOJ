#include <iostream>
#include <string>
using namespace std;

int exponential(int val, int cnt) {
	int res = 1;
	while (cnt > 0) {
		res *= val;
		cnt--;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int L, r = 31, M = 1234567891;
	string a;    // a[i]는 문자열 a의 i번째 문자를 의미함

	cin >> L;
	cin >> a;

	int sum = 0;
	for (int i = 0; i < L; i++)
		sum += (a[i] - 'a' + 1) * exponential(r, i);
	cout << sum << '\n';

	return 0;
}