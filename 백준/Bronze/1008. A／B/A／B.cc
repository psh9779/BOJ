#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	cout << fixed;    // fixed + precision(n) : 소수점 n자리까지 반올림(고정)하여 출력
	cout.precision(15);    // 상대오차가 10^-9 이하이면 정답이므로, 충분히 큰 precision으로 출력을 안전하게 하도록 함
	
	cout << double(A) / B;

	return 0;
}