#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<string> s;

	int N, M;
	cin >> N >> M;

	string temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		s.insert(temp);
	}
	
	int res = 0;
	for (int j = 0; j < M; j++) {
		cin >> temp;
		if (s.count(temp))
			res++;
	}
	cout << res << '\n';

	return 0;
}