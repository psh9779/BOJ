#include <iostream>
#include <unordered_set>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int A[15][15] = {};
	int N; cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> A[i][j];
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = i; k < N; k++) {
				for (int l = j; l < N; l++) {
					unordered_set<int> s = {};
					bool check = true;    // 순열을 만족하는지를 의미하는 flag
					for (int x = 1; x <= (k - i + 1) * (l - j + 1); x++)
						s.insert(x);
					for (int p = i; p <= k; p++) {
						for (int q = j; q <= l; q++) {
							if (s.count(A[p][q]))
								s.erase(A[p][q]);
							else {
								check = false;
								q = l;
								p = k;
							}
						}
					}
					if (check) cnt++;
				}
			}
		}
	}
	cout << cnt << '\n';

	return 0;
}