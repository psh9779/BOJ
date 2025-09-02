#include <iostream>
#include <string>
using namespace std;

// 전체 시간복잡도 : O(N + N(N-1)/2 + N) = O(N^2)
// N의 최대값이 1000이므로 1,000,000회의 연산이 수행. (1억 회 이하의 연산이므로 1초 내에 충분히 실행 가능)
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, arr[1001];
	cin >> N;    // 1 <= N <= 1000
	
	for (int cnt = 1; cnt <= N; cnt++)
		cin >> arr[cnt];

	// Selection Sort 이용
	int temp;
	for (int i = 1; i <= N - 1; i++) {
		for (int j = i + 1; j <= N; j++) {
			temp = arr[i];
			if (arr[i] > arr[j]) {
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int cnt = 1; cnt <= N; cnt++)
		cout << arr[cnt] << '\n';
	
	return 0;
}