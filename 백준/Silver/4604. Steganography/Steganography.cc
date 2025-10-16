#include <iostream>
#include <vector>
#include <string>

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	string s;
	string bits = "";
	while (1) {
		getline(cin, s);
		
		if (s.size() == 1 && s[0] == '#')
			break;

		if (s.size() == 1 && s[0] == '*') {
			while (bits.size() % 5 != 0)
				bits += "0";
			
			for (int i = 0; i < bits.size(); i += 5) {
				int val = 0;
				for (int j = 0; j < 5; j++)
					val = val * 2 + (bits[i + j] - '0');

				switch (val) {
				case 0:
					cout << " ";
					break;
				case 27:
					cout << "'";
					break;
				case 28:
					cout << ",";
					break;
				case 29:
					cout << "-";
					break;
				case 30:
					cout << ".";
					break;
				case 31:
					cout << "?";
					break;
				default:
					cout << char('A' + val - 1);
					break;
				}
			}
			cout << "\n";
			bits = "";
			continue;
		}

		int blank_cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ')
				blank_cnt++;

			if (i > 0 && (s[i - 1] == ' ' && s[i] != ' ')) {
				if (blank_cnt % 2)
					bits += "0";
				else
					bits += "1";
				blank_cnt = 0;
			}
		} 

		// 마지막 단어 뒤 공백 여부까지 처리
		if(blank_cnt > 0)
			bits += (blank_cnt % 2 ? "0" : "1");

		blank_cnt++;    // 각 줄의 끝(line ending)인 '\n'도 하나의 space group으로 처리 (문제 설명문에는 안보이지만, 원본에서는 분명히 명시되어있었다고 함)
	}

	return 0;
}