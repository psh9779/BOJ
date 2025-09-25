#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	// 1 <= M <= N <= 200,000
	int N, M;
	cin >> N >> M;

	// 모든 더미가 오름차순으로 쌓여있기만 하면 올바른 순서대로 교과서를 꺼낼 수 있음
	// 어떤 한 더미라도 오름차순으로 쌓여있지 않다면 올바른 순서대로 꺼낼 수 없음
	bool isValid = true;
	while (M--) {
		int K;
		cin >> K;

		int prev, curr;
		
		if (K > 0) cin >> prev;
		for (int i = 1; i < K; i++) {
			cin >> curr;
			if (prev < curr)
				isValid = false;
			prev = curr;
		}
	}
	cout << (isValid ? "Yes\n" : "No\n");

	return 0;
}