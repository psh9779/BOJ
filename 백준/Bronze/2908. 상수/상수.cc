#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B;
	cin >> A >> B;

	// A 문자열 뒤집기
	for (int i = 0; i < A.length() - i - 1; i++) {
		char temp = A[i];
		A[i] = A[A.length() - i - 1];
		A[A.length() - i - 1] = temp;
	}

	// B 문자열 뒤집기
	for (int j = 0; j < B.length() - j - 1; j++) {
		char temp = B[j];
		B[j] = B[B.length() - j - 1];
		B[B.length() - j - 1] = temp;
	}

	int int_A, int_B;

	int_A = stoi(A);    // string -> int 변환 (단, 변환 가능한 정수형 숫자 문자열이어야만 함)
	int_B = stoi(B);

	if (int_A >= int_B) cout << int_A;
	else cout << int_B;

	return 0;
}


/*
다른 풀이 : A,B 문자열을 뒤집어 더 큰 값을 판단하는것은 맨 끝 문자부터 각각 크기비교를 하면 되는 문제이다.
또한, 뒤집어서 출력해야한다고하여 굳이 원본 문자열을 뒤집을 필요 없이 뒤에서부터 출력하면 된다.

#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string A, B;
	cin >> A >> B;    // 두 수는 같지 않은 세 자리 수라는 조건 有

	string result;
	for (int i = 2; i >= 0; i--) {
		if (A[i] > B[i]) {
			result = A;
			break;
		}
		else if (A[i] < B[i]) {
			result = B;
			break;
		}
		// A[i] == B[i]이면 i--되어 더 앞의 문자를 반복해서 비교함
	}

	for (int j = 2; j >= 0; j--) cout << result[j];
	
	return 0;
}
*/