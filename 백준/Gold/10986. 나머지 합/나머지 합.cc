#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N, M;
	cin >> N >> M;

	vector<int> S(N + 1, 0);    // 구간 합을 M으로 나눈 나머지 저장
	vector<long long> cnt(M, 0);
	for (int i = 1; i <= N; i++) {
		int temp;
		cin >> temp;
		S[i] = (S[i - 1] + temp) % M;
		cnt[S[i]]++;    // 같은 나머지를 가진 구간 합의 개수 기록
	}

	long long answer = 0;
	answer += cnt[0];    // (1) 0~i까지의 구간 합 자체가 0인 경우(M으로 나누어 떨어지는 경우)의 수 더하기

	// (2) 같은 나머지를 가진 구간합의 요소 중 2개를 선택 -> 그 사이의 구간합이 M으로 나누어 떨어짐
	// ex) i != j이고, S[i] == S[j]이면, S[i]-S[j] = 0이므로 i+1부터 j까지의 구간합이 M으로 나누어 떨어짐을 의미
	for (int i = 0; i < M; i++) {
		if (cnt[i] > 1) {
			// 나머지가 같은 인덱스 중에서 2개를 뽑는 경우의 수 계산하여 더하기 (즉, nC2)
			answer += (cnt[i] * (cnt[i] - 1) / 2);    // 정수 오버플로우 조심 (answer 및 cnt의 각 요소를 long long 선언)
		}
	}
	cout << answer << '\n';

	return 0;
}