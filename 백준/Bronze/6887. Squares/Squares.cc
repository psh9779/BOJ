#include <iostream>
using namespace std;

// 가지고 있는 타일로 만들 수 있는 정사각형 한변의 길이의 최댓값 구하기
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n_tiles;
	cin >> n_tiles;    // 입력값은 10000 미만(less than) -> 즉, 가능한 정사각형 한변 길이의 최대값은 99
	
	int max_side_len = 0;
	for (int i = 1; i * i <= n_tiles; i++)
		max_side_len = i;
	cout << "The largest square has side length " << max_side_len << "." << '\n';

	return 0;
}