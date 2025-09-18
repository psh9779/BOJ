#include <iostream>
#include <string>
using namespace std;

// 공백 기준으로 파싱 잘하기
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;    // 숫자 입력 후 엔터가 입력 버퍼에 남아있다.
	cin.ignore();    // 입력 버퍼에 남아있는 개행 문자를 제거

	for (int i = 0; i < T; i++) {
		string lineinput;
		getline(cin, lineinput);    // getline()은 입력 버퍼에서 '\n'(개행 문자)까지 읽는다.
		int result = 0;
		string temp;    // 자동으로 빈 문자열로 초기화

		// 각 테스트 케이스마다 입력으로 주어지는 수는 10,000 이하의 자연수
		for (int j = 0; j < lineinput.length(); j++) {
			if (lineinput[j] == ' ') {
				result += stoi(temp);
				temp = "";    // 초기화
			}
			else
				temp += lineinput[j];
		}
		result += stoi(temp);    // 마지막 value값까지 더해주기
		cout << result << '\n';
	}

	return 0;
}



/* stringstream을 사용하여 공백 기준 파싱과 stoi를 한 번에 처리할 수 있음
#include <iostream>
#include <sstream>    // stringstream
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		string line;
		getline(cin, line);

		stringstream ss(line);    // 문자열에서 숫자를 읽어오는 입력 스트림이라고 생각
		int sum = 0, num;
		while (ss >> num) {    // 공백 단위로 숫자 추출
			sum += num;
		}
		cout << sum << '\n';
	}

	return 0;
}
*/