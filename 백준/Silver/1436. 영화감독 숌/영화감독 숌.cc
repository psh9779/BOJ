#include <iostream>
#include <string>
using namespace std;

// 종말의 수 : 어떤 수에 6이 적어도 3개 이상 연속으로 들어가는 수
// 입력 : N
// 출력 : N번째로 작은 종말의 수
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int i = 666;
	int cnt = 0;    // cnt는 종말의 숫자가 몇 번째인지를 저장
	string target;

	while (cnt != N) {
		target = to_string(i++);    // i값 후위 증가 연산
		for (int j = 0; j < target.length() - 2; j++) {
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
				cnt++;
				break;    // 6666과 같은 수의 break; 없으면 cnt를 2번 증가시키게 되기 때문
			}
		}
	}

	cout << i-1 << '\n';

	return 0;
}



/* to_string + find()를 이용하는 코드
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int i = 666, cnt = 0;

	while (true) {
		if (to_string(i).find("666") != string::npos) {    // string::find 함수는 문자열을 찾지 못하면 string::npos값을 반환
			cnt++;
			if (cnt == N) {
				cout << i << '\n';
				break;
			}
		}
		i++;
	}

	return 0;
}
*/



/* '% 연산' 기반 코드
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int cnt = 0;    // 종말의 수가 몇번째인지 저장
	int i = 666;
	while (cnt < N) {
		int temp = i++;    // i값은 후위 증가 연산
		int six_cnt = 0;    // 연속된 6의 개수를 저장

		while (temp > 0) {
			if (temp % 10 == 6) {
				six_cnt++;
				if (six_cnt == 3) {
					cnt++;
					break;
				}
			}
			else {
				six_cnt = 0;    // 6이 연속으로 나오지 않게되는 경우 연속된 6의 개수를 저장하는 변수를 0으로 초기화
			}
			temp /= 10;
		}

	}
	cout << i-1 << '\n';

	return 0;
}
*/