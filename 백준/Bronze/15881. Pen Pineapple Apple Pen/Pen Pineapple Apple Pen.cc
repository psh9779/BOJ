// pPAp의 개수 구하기
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	string temp;
	cin >> temp;

	int pPAp_cnt = 0;
	for (int cnt = 3; cnt < n;) {
		if (temp[cnt - 3] == 'p' && temp[cnt - 2] == 'P' && temp[cnt - 1] == 'A' && temp[cnt] == 'p') {
			pPAp_cnt += 1;
			cnt += 4;    // 하나의 펜이 두 개의 펜-파인애플-애플-펜에 포함될 수 없으므로 확실하게 4칸씩 건너뛰기
		}
		else
			cnt++;
	}

	cout << pPAp_cnt << '\n';

	return 0;
}