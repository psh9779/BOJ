#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;    // vector로 스택 직접 구현
	int N;
	cin >> N;

	for (int cnt = 0; cnt < N; cnt++) {
		int cmd;
		cin >> cmd;

		switch (cmd) {
		case 1: {
			int X;    // 지역변수 선언 시에는 중괄호로 범위 한정
			cin >> X;
			v.push_back(X);
			break;
		}
		case 2:
			if (v.size()) {
				cout << v.back() << '\n';
				v.pop_back();
			}
			else
				cout << -1 << '\n';
			break;
		case 3:
			cout << v.size() << '\n';
			break;
		case 4:
			cout << (v.size() ? 0 : 1) << '\n';
			break;
		case 5:
			cout << (v.size() ? v.back() : -1) << '\n';
			break;
		}
	}

	return 0;
}



/* <stack> STL을 이용한 코드
#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	stack<int> s;

	for (int i = 0; i < N; i++) {
		int cmd;
		cin >> cmd;

		switch (cmd) {
		case 1:{
			int temp;    // 지역변수 선언 때문에 중괄호를 사용하여 scope 한정
			cin >> temp;
			s.push(temp);
			break;
		}
		case 2:
			if (s.empty())
				cout << -1 << '\n';
			else {
				cout << s.top() << '\n';
				s.pop();
			}
			break;
		case 3:
			cout << s.size() << '\n';
			break;
		case 4:
			cout << (s.empty() ? 1 : 0) << '\n';
			break;
		case 5:
			cout << (s.empty() ? -1 : s.top()) << '\n';
			break;
		}
	}

	return 0;
}
 */