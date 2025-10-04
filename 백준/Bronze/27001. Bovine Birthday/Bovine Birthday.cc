#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// 윤년인 경우에만 2월은 29일까지 존재
// 1800년보다 이전에 태어난 경우는 없다고 가정 -> 기준 날짜를 1800년 1월 1일로 생각
// 1800년 1월 1일 요일을 구하고, 입력 날짜 요일을 계산하여 출력함으로써 문제를 해결하고자 함
bool isLeap(int year) {    // leap year 판별 함수
	if (year % 400 == 0)
		return true;
	else if (year % 100 != 0 && year % 4 == 0)
		return true;
	return false;
}

int main() {
	fastio;
	int dpm[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };    // days per month
	string days[7] = { "monday","tuesday","wednesday","thursday","friday","saturday","sunday" };

	// 1800년도 1월 1일을 기준으로 하기위해 1900년도 1월 1일이 월요일임을 이용하여 기준일자의 요일 구하기
	int sum = 0;
	for (int i = 1800; i < 1900; i++) {
		sum += (isLeap(i) ? 366 : 365);
	}
	
	int base = (7 - (sum % 7)) % 7;
	string new_days[7];
	for (int i = 0; i < 7; i++)
		new_days[i] = days[(base + i) % 7];

	int y, m, d;
	cin >> y >> m >> d;
	
	sum = 0;
	for (int i = 1800; i < y; i++)
		sum += (isLeap(i) ? 366 : 365);
	for (int j = 1; j < m; j++)
		sum += dpm[j - 1];
	sum += d - 1;    // 기준날짜는 포함 X
	
	if (isLeap(y) && m >= 3)
		sum += 1;

	cout << new_days[sum % 7] << '\n';

	return 0;
}