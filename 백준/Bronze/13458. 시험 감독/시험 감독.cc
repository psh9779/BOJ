#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	int B, C;
	cin >> B >> C;    // B, C는 각각 총감독관, 부감독관이 감시할 수 있는 응시자 수

	long long cnt = 0;

	// 총감독관은 오직 1명만 있어야 하고, 부감독관은 여러 명 있어도 됨 
	for (int i = 0; i < N; i++) {
		// 총감독관은 무조건 1명 배치
		int students = A[i] - B;
		cnt++;

		if (students <= 0)
			continue;
		else
			cnt += (students + C - 1) / C;    // 남은 학생을 부감독관으로 커버
	}
	cout << cnt << '\n';

	return 0;
}