#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int v[1001] = { 0 };

	int cnt = 1, n = 1;    // cnt는 현재 숫자 n이 채워지는 마지막 인덱스, n은 더해지는 수
	for (int i = 1; i <= 1000; i++) {
		if (i > cnt) {
			n++;
			cnt += n;
		}
		v[i] = v[i - 1] + n;
	}

	int A, B;
	cin >> A >> B;

	cout << v[B] - v[A - 1] << '\n';

	return 0;
}




/* 쉽게 푼 코드
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	// 직접 수열을 만들기
	vector<int> seq;
	for (int i = 1; seq.size() <= B; i++) {
		for (int j = 0; j < i; j++) {
			seq.push_back(i);
		}
	}

	// 만든 수열에서 누적 합 구하기
	int sum = 0;
	for (int i = A - 1; i < B; i++) {
		sum += seq[i];
	}

	cout << sum << '\n';

	return 0;
}
*/
