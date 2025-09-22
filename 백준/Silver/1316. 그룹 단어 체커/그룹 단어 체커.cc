#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	int cnt = 0;    // 그룹 단어 개수

	while (N--) {
		bool alpha[26] = { 0 };    // 모든 요소 false 초기화
		bool isGroupWord = true;    // 각 반복마다 그룹단어인지 판단할 플래그

		string word;
		cin >> word;

		char prev = word[0];
		alpha[word[0] - 'a'] = 1;

		for (int i = 1; i < word.length(); i++) {
			// 이전 문자와 달라진 경우만 확인
			if (word[i] != prev) {
				// 이전에 나온 문자가 다시 나온 경우
				if (alpha[word[i] - 'a'] != 0) {
					isGroupWord = false;
					break;
				}

				// 이전에 나온 문자가 아닌 다른 문자가 나온 경우
				alpha[word[i] - 'a'] = 1;
				prev = word[i];
			}
		}
		if (isGroupWord) cnt++;
	}
	cout << cnt << '\n';

	return 0;
}
