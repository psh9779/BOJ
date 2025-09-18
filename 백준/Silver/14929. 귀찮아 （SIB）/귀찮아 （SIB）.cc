#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);    // x_1 == v[0], x_n == v[n-1]로 생각
	long long sum = 0, sqrt_sum = 0;    // 요소값의 합과 제곱의 합을 각각 저장 (최악의 경우를 생각하여 long long으로 선언)
	for (int i = 0; i < n; i++) {
		cin >> v[i];    // v[i]는 절댓값이 100 이하인 정수
		sum += v[i];
		sqrt_sum += 1LL * v[i] * v[i];    // int끼리 곱셈 시 오버플로우가 나는것을 방지하기 위함 (해당 문제에서는 발생하지 않지만 안전장치 목적)
	}

	// 각 요소 합의 제곱 == 각 요소 제곱의 합 + 2 * 구하고자하는 값
	// (각 요소 합의 제곱 - 각 요소 제곱의 합)은 짝수임이 보장.
	// ex) (a+b)^2 == a^2 + b^2 + 2*ab
	long long res = (sum * sum - sqrt_sum) / 2;
	cout << res << '\n';

	return 0;
}