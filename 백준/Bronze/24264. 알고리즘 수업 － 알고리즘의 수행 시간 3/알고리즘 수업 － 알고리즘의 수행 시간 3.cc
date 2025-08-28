// 문제에 주어진 MenOfPassion 알고리즘에서 "# 코드1"은 이중 for문에 의해 n*n회 수행된다.
// O(n)은 n에 비례하는 "수행 횟수"를 나타내는 표기법.
// 즉 시간복잡도는 O(n^2)이며, 수행 횟수를 다항식으로 나타내었을 때 최고차항의 차수는 2이다.

#include <iostream>
using namespace std;

int main() {
	long long n;    // 1 <= n(입력 값) <= 500,000. 최악의 경우 n*n의 값은 2조 5천억이 됨 -> 따라서, 992경까지 커버 가능한 signed long long형으로 선언
	cin >> n;
	cout << n*n << '\n';    // 코드1의 수행횟수는 n*n회
	cout << "2\n";    // 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수는 2

	return 0;
}