#include <iostream>
using namespace std;

/*
	N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수 구하기
	N!이 10^n으로 나눠질 때, 뒤쪽 0의 개수는 n개가 됨
	2로 몇번 나눠지는지, 5로 몇번 나눠지는지를 구해서 두 값의 최솟값을 답으로 생각했음
	하지만, 2로 나눠지는 횟수는 5로 나눠지는 횟수에 비해 훨씬 많으므로 5로 나눠지는 횟수만 생각하면 됨
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int cnt_5 = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 125 == 0) {
			cnt_5 += 3;
			continue;
		}
		else if (i % 25 == 0) {
			cnt_5 += 2;
			continue;
		}
		else if (i % 5 == 0)
			cnt_5++;
	}
	cout << cnt_5 << '\n';

	return 0;
}