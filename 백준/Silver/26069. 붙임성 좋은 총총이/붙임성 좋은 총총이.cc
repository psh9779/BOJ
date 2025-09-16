#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	unordered_set<string> rainbow_dance = { "ChongChong" };

	while (N--) {
		string Ai, Bi;
		cin >> Ai >> Bi;

		if (rainbow_dance.count(Ai) || rainbow_dance.count(Bi)) {
			// unordered_set에 삽입 시, 중복 삽입되는 값은 자동으로 제거됨
			rainbow_dance.insert(Ai);
			rainbow_dance.insert(Bi);
		}
	}
	cout << rainbow_dance.size() << '\n';
	
	return 0;
}