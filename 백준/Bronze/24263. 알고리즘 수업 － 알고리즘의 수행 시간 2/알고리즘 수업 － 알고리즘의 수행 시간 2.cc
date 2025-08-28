// 문제에 주어진 MenOfPassion 알고리즘에서 "# 코드1"은 입력의 크기인 n회 수행된다.
// O(n)은 n에 비례하는 "수행 횟수"를 나타내는 표기법.
// 즉 시간복잡도는 O(n)이며, 수행 횟수를 다항식으로 나타내었을 때 최고차항의 차수는 1이다.

#include <iostream>
using namespace std;

int main() {
	int n;    // 1 <= n(입력 값) <= 500,000
	cin >> n;
	cout << n << '\n';    // 코드1의 수행횟수는 입력값 크기인 n회
	cout << "1\n";    // 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수는 1

	return 0;

}
