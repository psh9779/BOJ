#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> S(N + M, 0);
	for (int i = 0; i < N; i++)
		cin >> S[i];

	int money;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N + M; j++) {
			cin >> money;
			S[j] += money;
			S[i] -= money;
		}
	}

	for (int i = 0; i < N + M; i++) {
		if (i > 0) cout << ' ';
		cout << S[i];
	}

	return 0;
}