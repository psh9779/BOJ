#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	vector<pair <int,bool>> balloons(N);    // 종이에 적힌 값, 터짐 여부 저장
	for (int i = 0; i < N; i++) {
		int move_n;
		cin >> move_n;
		balloons[i] = { move_n, true };
	}

	int pos = 0;
	int remain = N;

	while (remain > 0) {
		cout << pos + 1;    // 현재 풍선 터뜨리기
		int move = balloons[pos].first;
		balloons[pos].second = false;
		remain--;

		// 풍선이 모두 터졌다면 종료
		if (remain == 0)
			break;
		else
			cout << ' ';

		// 터지지 않은 풍선만 카운트하여 이동
		if (move > 0) {
			for (int step = 1; step <= move;) {
				pos = (pos + 1) % N;
				if (balloons[pos].second)    // 안터진 풍선인 경우에만
					step++;
			}
		}
		else {    // move < 0 (move != 0이므로)
			for (int step = -1; step >= move;) {
				pos = (pos - 1 + N) % N;
				if (balloons[pos].second)
					step--;
			}
		}
	}

	return 0;
}




/*    덱(deque)을 회전시키는 방식으로 이동을 처리하는 코드
#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 1000

	deque<pair<int, int>> dq;    // {이동값, 풍선 번호} 저장
	for (int i = 0; i < N; i++) {
		int move;
		cin >> move;
		dq.push_back({ move, i + 1 });
	}

	while (1) {
		pair<int, int> balloon = dq.front();    // 맨 앞 풍선
		int move = balloon.first;
		int idx = balloon.second;
		dq.pop_front();
		cout << idx;

		if (dq.empty())
			break;
		else
			cout << " ";

		if (move > 0) {    // move값이 양수인 경우 오른쪽으로 move-1번 회전
			for (int i = 0; i < move - 1; i++) {
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else {    // move값이 음수인 경우 왼쪽으로 -move번 회전
			for (int i = 0; i < -move; i++) {
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}

	return 0;
}
*/