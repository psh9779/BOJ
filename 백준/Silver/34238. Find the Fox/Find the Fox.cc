#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<vector<char>> v(102, vector<char>(102, 0));    // 0 ~ 101 인덱스

int checkFOX(int i, int j) {
	int res = 0;
	char lu = v[i - 1][j - 1];    // 왼쪽 상단 요소
	char u = v[i - 1][j];    // 위쪽 요소
	char ru = v[i - 1][j + 1];    // 오른쪽 상단 요소
	char r = v[i][j + 1];    // 오른쪽 요소
	char l = v[i][j - 1];    // 왼쪽 요소
	char ld = v[i + 1][j - 1];    // 왼쪽 하단 요소
	char d = v[i + 1][j];    // 하단 요소
	char rd = v[i + 1][j + 1];    // 오른쪽 하단 요소

	if ((lu == 'F' && rd == 'X') || (lu == 'X' && rd == 'F'))
		res++;
	if ((u == 'F' && d == 'X') || (u == 'X' && d == 'F'))
		res++;
	if ((ru == 'F' && ld == 'X') || (ru == 'X' && ld == 'F'))
		res++;
	if ((r == 'F' && l == 'X') || (r == 'X' && l == 'F'))
		res++;

	return res;
}

int main() {
	fastio;

	int N, M;
	cin >> N >> M;    // N,M은 3이상 100이하의 자연수

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++)
			cin >> v[i][j];
	}

	int count = 0;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			if (v[i][j] == 'O') {
				count += checkFOX(i, j);
			}
		}
	}
	cout << count << '\n';

	return 0;
}