#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// N의 최댓값이 2000.
// 2000개의 수에 대해서 각각 좋은수인지 아닌지를 판단해야함
// 따라서, 각각의 수에 대해 좋은수인지 판별하는 시간복잡도는 NlogN이어야 함
// 정렬 + 투포인터 == O(nlogn) + O(n) 시간.
// 최종 시간복잡도 : N * (nlogn + n) == O(N^2logN)

int main() {
	fastio;
	int N; cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	sort(A.begin(), A.end());

	int count = 0;    // 좋은수의 개수 카운트 (어떤 수가 다른 두 개의 합으로 나타내지는 조합의 개수가 아님)
	for (int t = 0; t < N; t++) {
		int target = A[t];    // A[0]부터 A[N-1]까지의 수에 대해 좋은수인지 판별
		int i = 0, j = N - 1;

		while (i < j) {
			// 자기 자신이 합에 포함되는 경우는 제외
			if (j == t || A[i] + A[j] > target)
				j--;
			else if (i == t || A[i] + A[j] < target)
				i++;
			else {    // A[i] + A[j] == target인 경우 (즉, 좋은수임이 판별되면 바로 다음 타겟이 좋은수인지 판별하면 됨)
				count++;
				break;
			}
		}
	}
	cout << count << '\n';

	return 0;
}