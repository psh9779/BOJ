#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	unordered_set<int> accepts = { 4,5,8 };    // accept 상태들의 집합

	int sigma[9][2] = {
		{7,1},  // state 0 위치에서 '0'문자를 받으면 sigma[0][0]으로 전이, '1'문자를 받으면 sigma[0][1]로 전이
		{2,9},
		{3,9},
		{3,4},
		{7,5},
		{6,5},
		{3,8},
		{9,8},
		{7,1},
	};

	int T; cin >> T;
	while (T--) {
		int start = 0;    // 시작 상태
		int state = start;    // 현재 상태
		
		string s; cin >> s;
		for (char c : s) {
			int input = c - '0';    // 입력 문자를 0과 1의 정수로 변환
			state = sigma[state][input];
			if (state == 9)
				break;
		}

		if (accepts.count(state))
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}