#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;
	int dungchi[50][2];
	int score[50];
	
	for (int cnt = 0; cnt < N; cnt++) {
		cin >> dungchi[cnt][0] >> dungchi[cnt][1];
		score[cnt] = 1;    // 모두 1등으로 초기화
	}

	for (int i = 0; i < N-1; i++) {
		for (int j = i+1; j < N; j++) {
			if ((dungchi[i][0] > dungchi[j][0]) && (dungchi[i][1] > dungchi[j][1]))
				score[j]++;
			else if ((dungchi[i][0] < dungchi[j][0]) && (dungchi[i][1] < dungchi[j][1]))
				score[i]++;
			// 서로 다른 덩치끼리 크기를 정할 수 없는 경우엔 등수 변동 없음
		}
	}

	/* 모든 사람을 기준으로 다른 모든 사람과 비교하면서 자기보다 큰 사람이 몇 명 있는지 세면 더 직관적으로 이해할 수 있음
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			if (dungchi[i][0] < dungchi[j][0] && dungchi[i][1] < dungchi[j][1])
				score[i]++;
		}
	}
	*/

	for (int cnt = 0; cnt < N; cnt++) {
		if (cnt > 0) cout << ' ';
		cout << score[cnt];
	}

	return 0;
}