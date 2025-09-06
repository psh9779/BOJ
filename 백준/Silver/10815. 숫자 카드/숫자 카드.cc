#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	unordered_set<int> s;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);
	}

	int M;
	cin >> M;

	for (int j = 0; j < M; j++) {
		int temp;
		cin >> temp;
		if (j > 0) cout << ' ';
		cout << (s.count(temp) ? 1 : 0);
	}
	cout << '\n';

	return 0;
}