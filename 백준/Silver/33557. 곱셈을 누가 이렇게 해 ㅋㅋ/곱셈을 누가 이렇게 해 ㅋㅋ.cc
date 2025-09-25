#include <iostream>
#include <string>    // stoll()
#include <algorithm>    // max(), reverse()
#define FASTIO ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main() {
	FASTIO

	int T;
	cin >> T;    // 1 <= T <= 1000
	
	string A, B;
	while (T--) {
		cin >> A >> B;    // A, B 각각의 최대값은 10^6

		// string.length(), string.size()의 리턴값의 자료형은 size_t
		// 문자열의 길이가 int 범위 안이라면 문제가 없음 (int 범위보다 크면 오버플로우 발생 가능)
		int A_len = A.length(), B_len = B.length();
		int min_len = min((int)A_len, (int)B_len);

		long long Answer;
		Answer = stoll(A) * stoll(B);

		string res;
		reverse(A.begin(), A.end());
		reverse(B.begin(), B.end());

		for (int i = 0; i < min_len; i++) {
			int digitA = A[i] - '0';
			int digitB = B[i] - '0';
			string temp = to_string(digitA * digitB);
			res = temp + res;
		}

		if (A_len > B_len) {
			for (int j = min_len; j < A_len; j++) {
				string temp = to_string(A[j] - '0');
				res = temp + res;
			}
		}
		else if (A_len < B_len) {
			for (int k = min_len; k < B_len; k++) {
				string temp = to_string(B[k] - '0');
				res = temp + res;
			}
		}

		if (Answer == stoll(res)) cout << "1\n";
		else cout << "0\n";
	}

	return 0;
}





/* 10으로 %연산을 통해 각 자리의 숫자를 구할 수 있음을 이용
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	long long A, B;
	while (T--) {
		cin >> A >> B;

		string result = to_string(A * B);    // long long -> string
		string wrongResult;

		// A와 B 중 하나가 0이될때까지 나누기
		while (A && B) {
			wrongResult = to_string((A % 10) * (B % 10)) + wrongResult;
			A /= 10;
			B /= 10;
		}

		// A가 0이 아니라면 B가 0이 된것이므로 나머지 A의 남은 자릿수를 채우기
		while (A) {
			wrongResult = to_string(A % 10) + wrongResult;
			A /= 10;
		}

		// B가 0이 아니라면 A가 0이 된것이므로 나머지 B의 남은 자릿수를 채우기
		while (B) {
			wrongResult = to_string(B % 10) + wrongResult;
			B /= 10;
		}

		cout << (result == wrongResult) << '\n';    // 같다면 1, 다르면 0 출력
	}
	return 0;
}
*/