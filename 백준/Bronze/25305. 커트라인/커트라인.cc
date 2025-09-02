#include <iostream>
using namespace std;

// O(N + N^2 + 1) == O(N^2)의 시간복잡도를 갖는 코드. N의 최댓값은 1000이므로 1000*1000 = 1,000,000회의 연산 < (1억회의 연산 == 약 1초의 시간)
// 따라서, 버블정렬, 삽입정렬 등의 알고리즘을 사용해도 시간 제한을 충족함
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, k;
	cin >> N >> k;

	int score[1001] = { 0 };

	// O(N)
	for(int cnt = 1; cnt <= N; cnt++)
		cin >> score[cnt];

	// O(N^2) 내림차순 정렬 (score 배열의 제일 마지막 요소가 가장 작은 값이 되도록 정렬)
	int temp;
	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= N - i; j++) {
			temp = score[j];
			if (score[j] < score[j + 1]) {
				score[j] = score[j + 1];
				score[j + 1] = temp;
			}
		}
	}

	// O(1)
	cout << score[k] << '\n';

	return 0;
}	