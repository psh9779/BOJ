#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int N, K;
void Bubble_sort(vector<int>& A) {
	int change_cnt = 0;
	for (int i = N - 1; i >= 1; i--) {
		for (int j = 0; j <= i - 1; j++) {
			if (A[j] > A[j + 1]) {
				change_cnt++;
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;

				if (change_cnt == K) {
					cout << A[j] << ' ' << A[j+1] << '\n';
					return;
				}
			}
		}
	}
	
	// 교환 횟수가 K보다 작은 경우
	cout << "-1\n";
	return;
}

int main() {
	fastio;
	
	cin >> N >> K;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	Bubble_sort(A);

	return 0;
}