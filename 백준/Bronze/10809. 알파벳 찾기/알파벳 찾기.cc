#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int alpha[26];

	// for문을 fill_n(alpha, 26, -1);로 대체 가능
	for (int i = 0; i < 26; i++)
		alpha[i] = -1;

	string word;
	cin >> word;

	for (int j = 0; j < word.length(); j++) {
		if(alpha[int(word[j] - 'a')] == -1)
			alpha[int(word[j] - 'a')] = j;
	}

	for (int k = 0; k < 26; k++) {
		if (k > 0) cout << ' ';
		cout << alpha[k];
	}
	cout << '\n';

	return 0;
}

/* C++의 string의 멤버 함수인 find를 이용한 코드
#include <iostream>
#include <string>    // std::string 및 length, find 등의 string 멤버 함수를 사용하기 위함
using namespace std;

int main(void){
	string s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;

	for(int i = 0; i < alphabet.length(); i++){
		if(i > 0) cout << ' ';
		cout << (int)s.find(alphabet[i]);
	}
	cout << '\n';

	return 0;
}
*/