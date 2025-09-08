#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;
	int N;
	cin >> N;

	for (int cnt = 0; cnt < N; cnt++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int temp;
			cin >> temp;
			v.push_back(temp);
		}
		else if (cmd == "pop") {
			if (!v.empty()) {
				cout << v.back() << '\n';
				v.pop_back();
			}
			else
				cout << -1 << '\n';
		}
		else if (cmd == "size")
			cout << v.size() << '\n';
		else if (cmd == "empty")
			cout << (v.empty() ? 1 : 0) << '\n';
		else if (cmd == "top")
			cout << (v.empty() ? -1 : v.back()) << '\n';
	}

	return 0;
}



/* STL 컨테이너 중 하나인 stack을 사용한 코드
#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> s;

	int N;
	cin >> N;

	for (int cnt = 0; cnt < N; cnt++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int X;
			cin >> X;
			s.push(X);
		}
		else if (cmd == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (cmd == "size")
			cout << s.size() << '\n';
		else if (cmd == "empty")
			cout << (s.empty() ? 1 : 0) << '\n';
		else if (cmd == "top")
			cout << (s.empty() ? -1 : s.top()) << '\n';
	}

	return 0;
}
*/