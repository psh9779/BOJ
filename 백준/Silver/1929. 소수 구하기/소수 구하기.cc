#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

/*
	에라토스테네스의 체 방법을 사용
	x = 2부터 시작해서 x*x값이 주어진 값보다 작은 경우, x보다 큰 x의 배수를 지워나가기
*/
int main() {
	fastio;

	int M, N;
	cin >> M >> N;

	vector<bool> arr(N+1, true);

	arr[0] = false;    // 0은 소수가 아니므로 제외
	arr[1] = false;    // 1은 소수가 아니므로 제외

	for (int i = 2; i * i <= N; i++) {
		for (int j = i * i; j <= N; j += i) {    // i*i부터 +i마다 지워낼 것 (i보다 큰 i의 배수 제거)
			arr[j] = false;
		}
	}
	
	for (int k = M; k <= N; k++) {
		if (arr[k])
			cout << k << '\n';
	}

	return 0;
}