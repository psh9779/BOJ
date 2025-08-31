// 자연수 N의 분해합 == N + N을 이루는 각 자리수의 합
// 자연수 M의 분해합이 N이면, M은 N의 생성자라고 함
// 구하고자 하는 것 : (분해합)N이 주어졌을 때, N의 가장 작은 생성자 구하기
// (분해합)N의 생성자가 없으면 0을 출력

/*     <반복문의 반복횟수를 최적화한 코드>
	"M + M의 자릿수의 합 == N"인 M의 최솟값 구하기
	M == N - M의 자릿수의 합
	따라서, M의 최솟값은 M의 자릿수의 합이 최대인 경우
	즉, M의 모든 자릿수가 9일 때 M이 최소이므로 N - 9*(M의 자릿수)부터 1씩 증가시켜가며 M의 분해합이 N이 되는 M의 최솟값을 찾기
	단, M >= N이면 조건을 만족할 수 없으므로 N-1까지만 반복을 수행
*/
#include <iostream>
#include <string>    // std::to_string(), std::string
#include <algorithm>    // std::max()
using namespace std;

int main() {
	int N;    // 1 <= N <= 1,000,000.
	cin >> N;

	// 분해합 N의 자릿수 계산
	int d = to_string(N).length();    // d는 입력 N의 자리수를 저장하는 변수 (while문으로 자릿수를 구할 수도 있음)
	int start = max(1, N - 9 * d);    // 분해합 N에 대한 생성자 M은 자연수이어야 하므로 N <= 9*d인 경우엔 1부터 반복하기 위함
	int res = 0;    // 분해합 N의 가장 작은 생성자를 저장하는 변수

	for (int i = start; i < N; i++) {
		int sum = i;    // i값의 분해합을 저장하는 변수 sum
		int temp = i;

		while (temp > 0) {
			sum += temp % 10;    // temp값의 모든 자릿수까지 합하여 분해합을 구함
			temp /= 10;
		}
		if (sum == N) {
			res = i;
			break;
		}
	}

	cout << res << '\n';    // 분해합 N에 대해 생성자가 없는 경우엔 res == 0이므로 0을 출력함

	return 0;
}



/* M을 "단순히 1부터" 1씩 증가시켜서 분해합이 N이 되는 M의 최소값을 찾는 코드 : 시간복잡도 == O(N*logN)
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int res = 0;
	for (int i = 1; i <= N - 1; i++) {
		int sum = i;
		int temp = i;

		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N) {
			res = i;
			break;
		}
	}
	cout << res << '\n';

	return 0;
}
*/