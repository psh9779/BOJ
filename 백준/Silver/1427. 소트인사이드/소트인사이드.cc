#include <iostream>
#include <algorithm>
using namespace std;

/*
	sort()는 전체 범위에 대해 적용됨
	따라서, 입력받은 일부만 정렬하려면 sort(begin(), begin()+입력개수)처럼 범위를 지정해야 안전함
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // N은 10억 이하의 자연수 (따라서, 자릿수는 1이상)

	int arr[10], cnt = 0;    // cnt는 입력된 자연수 N의 자리수 개수
	while (N > 0) {
		arr[cnt++] = N % 10;
		N /= 10;
	}

	sort(arr, arr + cnt);    // 오름차순으로 정렬

	// 내림차순으로 출력
	for (int i = cnt - 1; i >= 0; i--)
		cout << arr[i];
	cout << '\n';

	return 0;
}