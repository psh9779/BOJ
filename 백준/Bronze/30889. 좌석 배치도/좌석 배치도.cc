#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<vector<char>> v(10, vector<char>(20,'.'));
	for (int cnt = 0; cnt < N; cnt++) {
		string seat;
		cin >> seat;
		
		int seat_row = seat[0] - 'A';
		int seat_column;
		
		if (seat.length() == 3)
			seat_column = (seat[1] - '0') * 10 + (seat[2] - '0');
		else
			seat_column = seat[1] - '0';

		seat_column--;    // 열번호는 1부터 입력되지만, 인덱스는 0부터 시작하므로 보정

		v[seat_row][seat_column] = 'o';
	}

	for (int i = 0; i < v.size(); i++) {    // 행 개수 (2차원 벡터에서 v.size()는 배열과 달리 행의 개수를 의미함)
		for (int j = 0; j < v[i].size(); j++)    // 열 개수
			cout << v[i][j];
		cout << '\n';
	}

	return 0;
}