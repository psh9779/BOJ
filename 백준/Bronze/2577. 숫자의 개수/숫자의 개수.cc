#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, C;    // A, B, C는 모두 100 이상, 1000 미만의 자연수.
	int num[10] = { 0 };

	cin >> A >> B >> C;
	int res = A * B * C;    // 최댓값 : 999 * 999 * 999 < 1,000,000,000 이므로 int 범위 내에 포함

	while (res != 0) {
		num[res % 10]++;
		res = res / 10;
	}

	for (int i = 0; i < 10; i++)
		cout << num[i] << '\n';

	/* foreach문 사용 예시
	for(int v : num){
		cout << v << '\n';
	}
	*/

	return 0;
}