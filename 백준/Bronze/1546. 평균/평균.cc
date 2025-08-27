#include <iostream>
#include <iomanip>    // setprecision()을 이용하기 위해 include
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, max_num = 0;
	double score[1000], result = 0;    // 조작된 점수는 실수에 해당
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (score[i] > max_num) max_num = score[i];
	}

	for (int j = 0; j < N; j++) {
		score[j] = score[j] / max_num * 100;
		result += score[j];
	}
	result = result / N;
	cout << fixed << setprecision(3) << result << '\n';    // 소수 이하를 고정해서 3자리까지 출력하도록 스트림 설정을 변경 (setprecision()을 다른 값으로 다시 호출하기 전까지는 마지막에 지정한 값이 계속 적용)

	return 0;

}
