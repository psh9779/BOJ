#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int k, d; cin >> k >> d;

	int cnt = 0;
	while (d - k >= 0) {
		d -= k;
		cnt++;
		k *= 2;    // k의 최댓값이 10^9이므로 2를 곱할 시에 정수 오버플로 문제는 없음
	}
	cout << cnt << '\n';

	return 0;

}
