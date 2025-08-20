#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, temp;
	int max_value = -1000000;    // 최댓값을 저장할 변수를 가능한 최솟값으로 초기화
	int min_value = 1000000;    // 최솟값을 저장할 변수를 가능한 최댓값으로 초기화

	cin >> N;
	// 속도 면에서, 삼항 연산자보다 if문이 조금 더 빠를 수 있다고 함 (반복횟수가 많은 경우에서의 미세한 차이)
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		max_value = (max_value < temp) ? temp : max_value;    // if(max_value < temp) max_value = temp;
		min_value = (min_value > temp) ? temp : min_value;    // if(min_value > temp) min_value = temp;
	}
	cout << min_value << ' ' << max_value;
	return 0;

}
