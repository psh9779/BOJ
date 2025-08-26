#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 규칙 : 2*2 / 3*3 / 5*5 / 9*9 / ... (2*이전값-1) * (2*이전값-1)
	// i번째에 한 행의 점의 개수 arr[i] = (arr[i-1] + arr[i-1] - 1) * (arr[i-1] + arr[i-1] - 1) = (2*arr[i-1]-1)*(2*arr[i-1]-1)개. 
	int arr[16] = {2}, N;    // 1 <= N <= 15이므로 크기가 16인 int형 배열 선언, 초기값 arr[0] = 2로 초기화
	cin >> N;

	for (int i = 1; i <= N; i++)
		arr[i] = 2 * arr[i - 1] - 1;

	cout << arr[N]*arr[N] << '\n';

	return 0;
}