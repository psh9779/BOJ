#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;    // 입력 시, 2 < n < 100,000인 정수 n을 입력한다는 전제조건이 존재함

	while (1) {
		cin >> n;
		if (n == -1)
			break;

		vector<int> divisors = { 1 };    // 1은 모든 수의 약수. 새로운 입력값을 입력받을때마다 초기화.
		int res = divisors[0];    // 1은 모든 수의 약수.

		for (int i = 2; i * i <= n; i++) {    // 입력인 n까지 더하지는 않으므로 2부터 시작
			if (n % i == 0) {
				divisors.push_back(i);
				res += i;
				if (i != n / i) {
					divisors.push_back(n / i);
					res += n / i;
				}
			}
		}

		sort(divisors.begin(), divisors.end());

		if (n == res) {
			cout << n << " = ";
			for (int j = 0; j < divisors.size(); j++) {
				if (j > 0) cout << " + ";
				cout << divisors[j];
			}
			cout << '\n';
		}
		else
			cout << n << " is NOT perfect.\n";
	}

	return 0;
}