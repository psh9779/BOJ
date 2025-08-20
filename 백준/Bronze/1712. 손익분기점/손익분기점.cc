#include <iostream>
#include <cmath>    // floor(), ceil() 사용을 위해 include
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	// A, B, C는 21억 이하의 자연수이며, 이후 사칙연산에 의해 int 범위를 넘어갈 수 있음 
	long long A, B, C;    // A = 고정비용, B = 가변비용, C = 노트북 한대 가격
	cin >> A >> B >> C;

	int result = A / (C - B);
	// Bx + A < Cx가 처음으로 가능해지는 x값을 찾으라는 문제
	// 즉, x > A / (C-B)인 자연수 x 구하기
	// 손익분기점이 존재하지 않으려면 B >= C이면 됨 -> -1 출력
	if (B >= C) result = -1;
	else if (floor(result) == result) result += 1;    // result값이 정수이면 그보다 1 큰 값
	else result = ceil(result);    // result값이 소수이면 올림

	cout << result << '\n';
	return 0;
}


/*    시간초과가 발생한 코드
#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// A, B, C는 21억 이하의 자연수이며, 이후 사칙연산에 의해 int 범위를 넘어갈 수 있음
	long long A, B, C;    // A = 고정비용, B = 가변비용, C = 노트북 한대 가격
	cin >> A >> B >> C;

	// Bx + A < Cx가 처음으로 가능해지는 x값을 찾으라는 문제
	// 손익분기점이 존재하지 않으려면 B >= C이면 됨 -> -1 출력
	int cnt = 1;
	while (1) {
		if (B >= C) {
			cout << -1 << '\n';
			break;
		}
		else if (B * cnt + A < C * cnt) {
			cout << cnt << '\n';
			break;
		}
		cnt += 1;    // 해당 부분에서 cnt를 1부터 1씩 증가시키면서 계속 반복하므로 시간초과가 발생
	}

	return 0;
}
*/