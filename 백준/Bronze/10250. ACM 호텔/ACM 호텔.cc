#include <iostream>
#include <string>

using namespace std;

// 선호 방번호 순서는 101, 201, 301, ..., 102, 202, ... 순임
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T, H, W, N;
	cin >> T;

	int floor, num;    // 층 수, 엘리베이터에서부터 세었을 때의 번호

	// 삼항 연산자 이용
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		floor = (N % H == 0) ? H : N % H;    // 층 수 구하기
		num = (N % H == 0) ? N / H : N / H + 1;    // 엘리베이터에서부터 세었을 때의 번호 구하기
		cout << floor * 100 + num << '\n';
	}

	return 0;
}