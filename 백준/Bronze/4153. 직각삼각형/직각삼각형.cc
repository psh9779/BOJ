#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int Heru, Ausar, Auset;

	while (1) {
		cin >> Heru >> Ausar >> Auset;    // 입력은 30,000보다 작은 양의 정수로 주어짐

		if (Heru + Ausar + Auset == 0)
			break;

		Heru *= Heru;
		Ausar *= Ausar;
		Auset *= Auset;

		if (Heru == Ausar + Auset || Ausar == Heru + Auset || Auset == Heru + Ausar)
			cout << "right\n";
		else    // 어떤 변을 빗변으로 두더라도 피타고라스의 정리를 만족할 수 없는 경우
			cout << "wrong\n";
	}

	return 0;
}