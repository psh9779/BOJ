#include <iostream>
using namespace std;

// 주의할 점 : 단, 설탕을 "정확하게" N 킬로그램 배달해야 함
// 정확하게 N킬로그램을 만들 수 없다면 -1을 출력하고, 그렇지 않으면 배달하는 봉지의 최소 개수를 출력
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int cnt_3kg, cnt_5kg;
	bool ismake = false;

	for (cnt_5kg = N / 5; cnt_5kg >= 0; cnt_5kg--) {
		if ((N - 5 * cnt_5kg) % 3 == 0) {
			cnt_3kg = (N - 5 * cnt_5kg) / 3;
			ismake = true;
			break;
		}
	}
	
	if (ismake)
		cout << cnt_3kg + cnt_5kg << '\n';
	else
		cout << -1 << '\n';

	return 0;

}
