#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, temp;
	int max_value = -1000000;    // 최댓값을 저장할 변수를 가능한 최솟값으로 초기화
	int min_value = 1000000;    // 최솟값을 저장할 변수를 가능한 최댓값으로 초기화

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		max_value = (max_value < temp) ? temp : max_value;
		min_value = (min_value > temp) ? temp : min_value;
	}
	cout << min_value << ' ' << max_value;
	return 0;
}