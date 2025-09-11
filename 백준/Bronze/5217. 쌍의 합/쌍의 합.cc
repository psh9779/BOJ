#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;    // T < 100 (T : 테스트 케이스의 개수)

	for (int cnt = 0; cnt < T; cnt++) {
		int input_n;
		cin >> input_n;

		cout << "Pairs for " << input_n << ":";
		bool check = false;
		for (int i = 1; i < (input_n + 1) / 2; i++) {
			int j = input_n - i;
			
			// 콤마 출력 판단
			if (check) cout << ',';
			else check = true;

			cout << ' ' << i << ' ' << j;
		}
		cout << '\n';
	}

	return 0;
}

/* 조금 더 깔끔한 코드 -> bool 변수 X
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;    // T < 100 (T : 테스트 케이스의 개수)

	while (T--) {
		int n;
		cin >> n;

		cout << "Pairs for " << n << ":";

		for (int i = 1; i < (n + 1) / 2; i++) {
			if (i > 1) cout << ",";
			cout << " " << i << " " << n - i;
		}
		cout << '\n';
	}

	return 0;
}
*/