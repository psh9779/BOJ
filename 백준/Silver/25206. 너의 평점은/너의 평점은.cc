#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string sub;    // 과목명
	double score;    // 학점
	string grade;    // 과목 평점
	double grade_score;    // 과목 평점 문자열을 double형으로 환산

	double sum_s_mul_g = 0;    // (학점 x 과목평점)의 합
	double sum_score = 0;    // 학점의 총합

	for (int i = 0; i < 20; i++) {
		cin >> sub >> score >> grade;

		if (grade[0] == 'P')    // 등급이 P인 과목은 계산에서 제외
			continue;

		switch (grade[0]) {
		case 'A':
			grade_score = (grade[1] == '+') ? 4.5 : 4.0;
			break;
		case 'B':
			grade_score = (grade[1] == '+') ? 3.5 : 3.0;
			break;
		case 'C':
			grade_score = (grade[1] == '+') ? 2.5 : 2.0;
			break;
		case 'D':
			grade_score = (grade[1] == '+') ? 1.5 : 1.0;
			break;
		default:    // F가 입력되는 경우
			grade_score = 0.0;
		}
		sum_s_mul_g += score * grade_score;
		sum_score += score;
	}

	cout << fixed << setprecision(6) << sum_s_mul_g / sum_score << '\n';    // 정답과의 절대오차 또는 상대오차가 10^-4 이하이면 정답으로 인정 -> 최소 소수 6자리 이상 출력해야 안전함

	return 0;
}