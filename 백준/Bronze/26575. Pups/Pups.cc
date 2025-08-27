#include <iostream>
#include <iomanip>    // setprecision() 사용하기 위함
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// d : the number of dogs
	// f : the amount of food per dog in pounds
	// p : the price of the food per pound
	// 따라서, 구하고자 하는 것 = 구매해야할 총 가격 = d * f * p
	// 
	// 각각의 입력 데이터셋에 대해 펫먹이를 구매하는데 필요한 소수 2째짜리까지 반올림된 총액을 출력하라.
	// -> For each data set, output the total amount of money required to buy the food, rounded to the nearest hundredth.
	//
	// tenth : 0.1 == 소수점 첫째 자리, hundredth : 0.01 == 소수점 둘째 자리, thousandth : 0.001 == 소수점 셋째 자리
	// 
	// 출력 전에 달러 기호($)를 붙일 것

	int n;
	double d, f, p;
	cin >> n;

	cout << fixed << setprecision(2);    // 소수 둘째 자리까지 반올림하여 출력하도록 스트림 설정을 변경

	for (int i = 0; i < n; i++) {
		cin >> d >> f >> p;
		cout << '$' << d * f * p << '\n';
	}

	return 0;
}