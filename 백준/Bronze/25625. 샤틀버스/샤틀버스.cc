#include <iostream>
using namespace std;

// 출력 : 서울대입구역에 있는 민준이가 버스에 탑승하기 위해 기다려야 하는 최소 시간
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// x : 제2공학관 <-> 서울대입구역 편도 시간, y : 버스가 2공학관으로 도착하는데까지 걸리는 시간
	// x != y임은 보장되어 있음
	// 2 <= x <= 100; 1 <= y < 2*x
	int x, y;
	cin >> x >> y;
	cout << ((x < y) ? y - x : x + y);

	return 0;
}