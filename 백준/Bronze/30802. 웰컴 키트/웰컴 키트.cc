#include <iostream>
#include <algorithm>
using namespace std;
/*
* 티셔츠는 S, M, L, XL, XXL, XXXL 6종류의 사이즈가 있으며, 같은 사이즈의 T장 묶음으로만 주문 간으
* 펜은 한 종류이고, "P자루씩 묶음으로 주문하거나 / 한 자루씩 주문할 수 있음"
* 티셔츠는 남아도 되는데 부족해서는 안되고 신청한 사이즈대로 나눠줘야함
* 펜은 남거나 부족해서 안되고 정확히 참가자 수만큼 준비되어야 함
* 
* 이때, 티셔츠를 T장씩 최소 몇 묶음 주문해야하는지, 펜을 P자루씩 최대 몇 묶음 주문해야하는지와 펜은 낱개로 몇개를 더 주문해야하는지 출력
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;    // 1 <= N <= 10억
	cin >> N;

	int size[6];    // size[0] ~ size[5] == S 사이즈 신청자 수 ~ XXXL 사이즈 신청자 수를 저장
	for (int i = 0; i < sizeof(size) / sizeof(size[0]); i++)    // 정적 배열이므로 고정된 크기인 6으로 써도 됨
		cin >> size[i];

	int T, P;
	cin >> T >> P;

	int bundle_T = 0;
	for (int j = 0; j < sizeof(size) / sizeof(size[0]); j++) {
		// if-else문 대신 올림 나눗셈 사용하기 : bundle_T += (size[j] + T - 1) / T;
		// (size[j] + T - 1) / T == (size[j] - 1) / T + 1로 생각할 수 있다.
		if (size[j] % T)
			bundle_T += size[j] / T + 1;
		else
			bundle_T += size[j] / T;
	}

	int bundle_pen, each_pen;    // 묶음 수와 낱개를 저장
	bundle_pen = N / P;
	each_pen = N % P;

	cout << bundle_T << '\n';
	cout << bundle_pen << ' ' << each_pen << '\n';

	return 0;
}