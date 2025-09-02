#include <iostream>
#include <string>
using namespace std;

// 5개의 자연수가 주어지므로 정렬 시 O(N^2)의 시간복잡도가 걸리는 정렬 알고리즘도 사용 가능
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[5], sum = 0;
	for (int cnt = 0; cnt < 5; cnt++) {
		cin >> arr[cnt];
		sum += arr[cnt];
	}

	// Bubble Sort 이용 [0] [1] [2] [3] [4]
	int temp;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			temp = arr[j];
			if (arr[j] > arr[j + 1]) {
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	// 평균과 중앙값은 모두 자연수임이 보장됨
	cout << sum / 5 << '\n' << arr[2] << '\n';

	return 0;
}	