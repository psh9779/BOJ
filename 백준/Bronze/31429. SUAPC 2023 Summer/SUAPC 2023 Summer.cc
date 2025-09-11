#include <iostream>
#include <vector>
using namespace std;

// N을 한 팀이 푼 문제 수와 푼 문제들의 페널티의 합을 공백으로 구분하여 출력
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	// 문제에서 요구하는 값들을 직접 코드안에 넣어서 해결하는 하드 코딩 문제
	vector<pair<int, int>> v = { {12,1600},{11,894},{11,1327},{10,1311},{9,1004},{9,1178},{9,1357},{8,837}, {7,1055},{6,556},{6,773} };
	cout << v[N - 1].first << ' ' << v[N - 1].second << '\n';

	return 0;
}