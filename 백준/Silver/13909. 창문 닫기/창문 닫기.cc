#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// 예제 입력 2를 통해, 1^2, 2^2, 3^2, 4^2 ... 의 제곱수만 결국 마지막에 열린다는 것을 알게되었다.
// 즉, 어떤 수의 약수의 개수가 홀수개이면 열리게 된다.
int main() {
	fastio;

	long long N; cin >> N;    // N은 21억 이하의 자연수.
	int cnt = 0;
	for (int i = 1; i * i <= N; i++) {
		cnt += 1;
	}
	cout << cnt << '\n';
	
	return 0;
}