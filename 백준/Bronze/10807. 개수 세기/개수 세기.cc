#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);    // scanf,printf와 cin,cout 동기화 해제
	cin.tie(NULL);    // 입력 전 flush 여부에만 영향을 줌

	int N, num[101], v, sum = 0;
	
	cin >> N;
	
	for (int i = 0; i < N; i++)
		cin >> num[i];
	
	cin >> v;
	
	for (int j = 0; j < N; j++) {
		if (num[j] == v)
			sum += 1;
	}
	cout << sum;
	// cout << sum << flush;    -> flush를 남발하면 속도 손해가 발생할 수 있음
	// 하지만, 사용자에게 즉시 보여야 하는 메시지의 경우, flush를 해주어야 함
	return 0;    // main 종료 시 출력 스트림을 flush하므로 화면 출력은 보장됨
}