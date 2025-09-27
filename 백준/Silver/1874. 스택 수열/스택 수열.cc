#include <iostream>
#include <stack>
#include <queue>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int n;
	cin >> n;

	stack<int> s;
	queue<int> qu;
	
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		qu.push(temp);
	}

	string res;
	for (int j = 1; j <= n; j++) {
		s.push(j);
		res += "+\n";
		while (!s.empty() && s.top() == qu.front()) {
			res += "-\n";
			s.pop();
			qu.pop();
		}
	}
	cout << (s.empty() ? res : "NO\n");

	return 0;
}



/* stack 및 vector STL을 이용한 방법
#include <iostream>
#include <stack>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int n;
	cin >> n;

	vector<int> seq(n);
	for (int i = 0; i < n; i++)
		cin >> seq[i];

	stack<int> s;
	vector<char> res;
	int idx = 0;

	for (int j = 1; j <= n; j++) {
		s.push(j);
		res.push_back('+');

		while (!s.empty() && s.top() == seq[idx]) {
			s.pop();
			res.push_back('-');
			idx++;
		}
	}

	if (s.empty()) {
		for (char c : res)
			cout << c << '\n';
	}
	else
		cout << "NO\n";

	return 0;
}
*/