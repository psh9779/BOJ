#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // N : 파일 이름의 개수

	string res;
	string temp;
	for (int cnt = 0; cnt < N; cnt++) {
		// 파일 이름의 길이는 모두 같고 길이는 최대 50이며, 파일명은 알파벳 소문자 및 '.'으로 구성
		cin >> temp;
		if (cnt == 0) {
			res = temp;
			continue;
		}
		for (int i = 0; i < res.length(); i++) {
			if (temp[i] != res[i])
				res[i] = '?';
		}
	}
	cout << res << '\n';
	
	return 0;
}