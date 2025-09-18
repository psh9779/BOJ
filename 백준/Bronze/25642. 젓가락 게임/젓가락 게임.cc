#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	while (1) {
		// 용태부터 선공
		B += A;
		if (B >= 5) {
			cout << "yt\n";
			break;
		}
		
		// 유진이가 후공
		A += B;
		if (A >= 5) {
			cout << "yj\n";
			break;
		}
	}

	return 0;
}



/* 깔끔하게 직관적으로 작성한 코드
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B;
	cin >> A >> B;

	while (A < 5 && B < 5) {
		// 용태 선공
		B += A;
		if (B >= 5) break;

		// 유진 후공
		A += B;    // while 조건문에 의해 A >= 5이면 반복문을 탈출함
	}

	// 승자 출력
	if (B >= 5) cout << "yt\n";
	else cout << "yj\n";

	return 0;
}

*/
