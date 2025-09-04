#include <iostream>
using namespace std;

// 가분수 -> 대분수 변환
// 2^31-1은 signed int의 최대값을 의미함 (32비트 체계에서, 첫번째 비트가 0(부호비트)이고 나머지가 모두 1이면 2^31 - 1이 됨)
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int nu, de;    // numerator : 분자, denominator : 분모

	while (1) {
		cin >> nu >> de;    // 1 ~ 2^31-1 범위의 두 정수가 입력됨
		if (!(nu + de))    // nu, de == 0, 0이면 무한루프 종료
			break;
		cout << nu / de << ' ' << nu % de << " / " << de << '\n';
	}

	return 0;
}