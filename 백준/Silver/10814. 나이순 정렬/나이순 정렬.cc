#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector <pair<int, string>> members(N);
	for (int cnt = 0; cnt < N; cnt++)
		cin >> members[cnt].first >> members[cnt].second;

	// 나이가 같은 회원의 입력 순서가 보장되어야 하므로 stable_sort()를 사용해야 한다.
	stable_sort(members.begin(), members.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
		});
	
	for (int cnt = 0; cnt < N; cnt++)
		cout << members[cnt].first << ' ' << members[cnt].second << '\n';

	return 0;
}