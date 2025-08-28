#include <iostream>
using namespace std;

int main() {
	int ang_1, ang_2, ang_3;
	cin >> ang_1 >> ang_2 >> ang_3;    // 삼각형의 세 각을 각각 입력받음

	if (ang_1 + ang_2 + ang_3 == 180) {
		if (ang_1 == ang_2 && ang_2 == ang_3)    // 세 각의 크기가 모두 60인 경우
			cout << "Equilateral\n";
		else if (ang_1 == ang_2 || ang_2 == ang_3 || ang_3 == ang_1)    // 두 각이 같은 경우
			cout << "Isosceles\n";
		else    // 같은 각이 없는 경우
			cout << "Scalene\n";
	}
	else
		cout << "Error\n";

	return 0;
}