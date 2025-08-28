#include <iostream>
#include <algorithm>
using namespace std;

// 만들 수 있는 가장 큰 삼각형의 둘레 구하기
int main() {
	int arr[3];    // 입력은 고정된 3개의 int값 -> 고정 크기 배열로 선언
	cin >> arr[0] >> arr[1] >> arr[2];
	sort(arr, arr+3);    // sort()에서 두번째 인자는 마지막 요소의 다음 위치로, 정렬에 포함되지 않는다.

	// arr[0] <= arr[1] <= arr[2].
	int sum = arr[0] + arr[1] + arr[2];
	
	if (arr[0] + arr[1] > arr[2])
		cout << sum << '\n';
	else    // min_val + medium_val <= max_val인 경우
		cout << 2 * (sum - arr[2]) - 1;

	return 0;
}