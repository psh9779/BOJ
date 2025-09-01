#include <iostream>
#include <string>
using namespace std;

/*
나머지 연산의 법칙 중 분배법칙을 이용해서 풀어야 하는 문제 (오버플로우가 발생 가능하기에)
"% 연산은 다음과 같이 분배법칙이 성립"
(A+B) % C == (A%C + B%C) % C    // 사용됨
(A-B) % C == (A%C - B%C) % C
(A*B) % C == (A%C * B%C) % C    // 사용됨
(A^k) % C == ((A%C)^k) % m
*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	long long L, r = 1, M = 1234567891;
	string a;    // a[i]는 문자열 a의 i번째 문자를 의미함

	cin >> L;
	cin >> a;

	long long sum = 0;
	for (int i = 0; i < L; i++) {
		// (a[i] * r) % M == ((a[i] % M) * (r % M)) % M 임을 이용
		sum += ((a[i] - 'a' + 1) * r) % M;
		r = (r * 31) % M;    // 다음 반복에서 사용할 31^(i+1)값을 미리 계산
	}
	
	cout << sum % M << '\n';    // 결과적으로, 누적 합에 대해서도 % 연산이 필요!

	return 0;
}