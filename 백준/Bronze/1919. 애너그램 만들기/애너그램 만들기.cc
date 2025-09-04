#include <iostream>
#include <cstdlib>
using namespace std;

// 단어 str1의 각 문자들의 순서를 잘 바꾸어 str2를 만들 수 있다면 str1과 str2는 에너그램 관계에 있음
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int cnt_alpha[26] = { 0 };
	string str1, str2;

	cin >> str1 >> str2;
	
	for (int i = 0; i < str1.length(); i++)
		cnt_alpha[str1[i] - 'a']++;
	for (int j = 0; j < str2.length(); j++)
		cnt_alpha[str2[j] - 'a']--;

	int sum = 0;
	for (int cnt = 0; cnt < 26; cnt++)
		sum += abs(cnt_alpha[cnt]);

	cout << sum << '\n';

	return 0;
}