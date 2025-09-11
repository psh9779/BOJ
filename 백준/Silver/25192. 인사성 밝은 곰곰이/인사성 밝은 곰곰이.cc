#include <iostream>
#include <unordered_set>    // 충돌이 없으면 count()는 O(1).
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 100,000

	unordered_set<string> s;
	
	int use_imo = 0;
	string input;
	while (N--) {
		cin >> input;

		if (input == "ENTER")
			s.clear();    // 모든 원소 제거
		else if (s.count(input))    // s.count(input) == 1인 경우
			continue;
		else {    // s.count(input) == 0인 경우
			use_imo++;
			s.insert(input);
		}
	}
	cout << use_imo << '\n';

	return 0;
}