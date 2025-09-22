#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // sort()
using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
	if (a.first != b.first)
		return a.first > b.first;    // 우승 확률 내림차순 정렬
	return a.second < b.second;    // 우승 확률 같으면 팀이름 사전순 정렬
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string yd_name;
	cin >> yd_name;
	int LOVE[4] = { 0 };

	for (int i = 0; i < yd_name.size(); i++) {
		if (yd_name[i] == 'L')
			LOVE[0]++;
		else if (yd_name[i] == 'O')
			LOVE[1]++;
		else if (yd_name[i] == 'V')
			LOVE[2]++;
		else if (yd_name[i] == 'E')
			LOVE[3]++;
	}

	int N;
	cin >> N;

	vector<pair<int, string>> v(N, {0,""});
	for (int i = 0; i < N; i++) {
		int L = LOVE[0], O = LOVE[1], V = LOVE[2], E = LOVE[3];
		
		cin >> v[i].second;
		for (char c : v[i].second) {
			if (c == 'L')
				L++;
			else if (c == 'O')
				O++;
			else if (c == 'V')
				V++;
			else if (c == 'E')
				E++;
		}

		v[i].first = ((L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E)) % 100;
	}

	sort(v.begin(), v.end(), cmp);
	cout << v[0].second << '\n';

	return 0;
}