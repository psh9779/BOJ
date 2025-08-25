#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;

	int cnt[26] = { 0 };
	int max_freq = 0, check = 0;
	char max_char;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';    // 소문자를 대문자로 변경

		cnt[s[i] - 'A']++;    // 해당 알파벳 빈도수 증가

		// 현재 알파벳이 최빈값보다 많이 등장하면 갱신
		if (max_freq < cnt[s[i] - 'A']) {
			max_freq = cnt[s[i] - 'A'];    // 빈도의 최댓값 갱신
			max_char = s[i];    // 최빈 알파벳 갱신
		}
	}

	for (int j = 0; j < 26; j++)
		if (cnt[j] == max_freq) check++;

	if (check == 1) cout << max_char << '\n';
	else cout << "?\n";

	return 0;
}

/* 다른 코드
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string s;
	cin >> s;

	int freq[26] = { 0 };    // 빈도수 저장

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';    // int -> char 암묵적 형변환 (대문자로 통일)

		freq[s[i] - 'A']++;
	}

	int max = 0;
	bool isdup;
	char result_char;

	// 최빈 알파벳 찾기
	for (int j = 0; j < 26; j++) {
		if (max < freq[j]) {
			max = freq[j];    // 최댓값 갱신
			result_char = 'A' + j;
			isdup = false;
		}
		else if (max == freq[j])    // 최댓값이 또 등장할 경우
			isdup = true;
	}
	if (isdup) cout << "?\n";
	else cout << result_char << '\n';

	return 0;
}
*/