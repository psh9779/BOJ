#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;

	unordered_set<string> sub_strs;
	int len = S.length();

	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			sub_strs.insert(S.substr(i, j - i + 1));    // i에서 시작해서 길이 j만큼의 새로운 문자열을 삽입
		}
	}
	cout << sub_strs.size();

	return 0;
}