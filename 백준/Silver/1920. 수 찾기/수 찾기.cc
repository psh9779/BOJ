#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<int> s;
	int N;
	cin >> N;

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
		cout << s.count(temp) << '\n';
	}

	return 0;
}