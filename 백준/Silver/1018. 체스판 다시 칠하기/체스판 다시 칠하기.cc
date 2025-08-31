#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;    // 8 <= N,M <= 50
	
	char start_white[50][50], start_black[50][50], input[50][50];

	/*    < 결국 필요가 없어진 코드 >
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
	*/

	// 입력으로 주어지는 보드를 각각 행단위로 상태 저장
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



 /* 깔끔하게 작성한 코드 (99 ~ 107번 줄 중요)
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;    // (N*M == 행개수 * 열개수) 크기의 보드판
	cin >> N >> M;

	string board[50];    // 각 요소 board[cnt]가 std::string 객체임
	for (int i = 0; i < N; i++)
		cin >> board[i];

	int result = 64;

	// 모든 시작 위치 탐색
	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int cnt_w = 0;    // 왼쪽 위가 White일 때, 다시 칠해야 할 정사각형 개수
			int cnt_b = 0;    // 왼쪽 위가 Black일 때, 다시 칠해야 할 정사각형 개수

			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					char cur = board[i + x][j + y];
					
					// x+y가 짝수면 8*8 보드의 왼쪽 위와 같은 색깔이어야 하며, 홀수이면 8*8 보드의 왼쪽 위와 다른 색깔이어야 한다.
					if ((x + y) % 2 == 0) {
						if (cur != 'W') cnt_w++;    // 왼쪽 위가 White인 체스판을 기준으로 생각했을 때, 다시 칠해야 할 정사각형 개수 (인덱스 합이 짝수인 경우엔 W이어야 하므로)
						if (cur != 'B') cnt_b++;    // 왼쪽 위가 Black인 체스판을 기준으로 생각했을 때, 다시 칠해야 할 정사각형 개수
					}
					else {
						if (cur != 'B') cnt_w++;    // 왼쪽 위가 White인 체스판을 기준으로 생각했을 때, 다시 칠해야 할 정사각형 개수
						if (cur != 'W') cnt_b++;    // 왼쪽 위가 Black인 체스판을 기준으로 생각했을 때, 다시 칠해야 할 정사각형 개수
					}
				}
			}
			result = min(result, min(cnt_w, cnt_b));    // result와 (cnt_w, cnt_b 중의 최솟값)의 최솟값을 계산
		}
	}
	cout << result << '\n';

	return 0;
}
*/
