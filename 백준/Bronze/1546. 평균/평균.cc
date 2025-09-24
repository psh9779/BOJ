#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int score[1000];    // 시험 본 과목의 개수는 1000개 이하
	int max_value = 0;
	double sum = 0;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (max_value < score[i])
			max_value = score[i];
		sum += score[i];
	}

	// 새로운 평균 == (기존 과목 점수의 총합 * 100) / 최고점 / N 을 이용
	double result = sum * 100 / max_value / N;

	// cout의 기본 실수 출력은 유효 숫자 6자리 정도까지 출력하므로, "실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하"조건을 만족함"
	cout << result << '\n';

	// 정밀도를 더 안전하게 보장하려면 fixed와 precision을 사용하면 됨
	// 소수 이하를 고정해서 3자리까지 출력하도록 스트림 설정을 변경 (setprecision()을 다른 값으로 다시 호출하기 전까지는 마지막에 지정한 값이 계속 적용
	// cout << fixed << setprecision(3) << result << '\n';

	return 0;
}
