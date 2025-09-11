#include <iostream>
using namespace std;

// 문제 해석 : 세명의 아이들을 가진 가족이 있다. 첫째와 둘째, 둘째와 셋째의 나이차이 간격은 동일
// 셋째와 둘째 아이의 나이가 주어질 때, 첫째 아이의 나이 구하기
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int Y, M;    // 0 <= Y <= M <= 50
	cin >> Y >> M;
	
	int diff = M - Y;
	
	cout << M + diff << '\n';

	return 0;
}