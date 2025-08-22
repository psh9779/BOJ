#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	cout << fixed;    // fixed + precision(n) : 소수점 n자리까지 반올림(고정)하여 출력
	cout.precision(10);    // 상대오차가 10^-9 이하이면 정답이므로, 최소 출력 자릿수는 10자리 이상임 (상대오차가 10^-x 이하이면 정답이다 == 최소 소수점 x+1자리 이상은 출력해야 한다)
	
	cout << double(A) / B;

	return 0;

}
