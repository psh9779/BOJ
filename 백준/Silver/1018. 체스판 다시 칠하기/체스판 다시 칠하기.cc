#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;    // 8 <= N,M <= 50
	
	char start_white[50][50], start_black[50][50], input[50][50];

	// 맨 왼쪽 위 칸이 흰색, 검은색인 8 x 8 체스판 초기화
	for (int row = 0; row < 8; row++) {
		for (int col = 0; col < 8; col++) {
			if ((row + col) % 2) {
				start_white[row][col] = 'B';
				start_black[row][col] = 'W';
			}
			else {
				start_white[row][col] = 'W';
				start_black[row][col] = 'B';
			}
		}
	}

	// 입력으로 주어지는 보드의 각 행의 상태 저장
	for (int row = 0; row < N; row++)
		cin >> input[row];

	int min_edit_cnt = 64;    // 다시 칠해야 하는 정사각형 개수의 최솟값을 저장할 변수

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int edit_cnt_w = 0;    // 맨 왼쪽 위 칸이 흰색일 때, 다시 칠해야 하는 정사각형의 개수
			int edit_cnt_b = 0;    // 맨 왼쪽 위 칸이 검은색일 때, 다시 칠해야 하는 정사각형의 개수

			for (int row = i; row < i + 8; row++) {
				for (int col = j; col < j + 8; col++) {
					if ((row + col) % 2) {    // 행+열의 인덱스 합이 홀수인 경우
						if (input[row][col] == 'W')
							edit_cnt_w++;
						else
							edit_cnt_b++;
					}
					else {    // 행+열의 인덱스 합이 짝수인 경우
						if (input[row][col] == 'W')
							edit_cnt_b++;
						else
							edit_cnt_w++;
					}
				}
			}
			if (edit_cnt_w >= edit_cnt_b)
				min_edit_cnt = (edit_cnt_b < min_edit_cnt) ? edit_cnt_b : min_edit_cnt;
			else
				min_edit_cnt = (edit_cnt_w < min_edit_cnt) ? edit_cnt_w : min_edit_cnt;
		}
	}

	cout << min_edit_cnt << '\n';
	
	return 0;
}