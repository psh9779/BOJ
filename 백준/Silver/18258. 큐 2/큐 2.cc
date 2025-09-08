#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> qu;
	int N;    // 1 <= N <= 2,000,000
	cin >> N;

	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int X;
			cin >> X;
			qu.push(X);
		}
		else if (cmd == "pop") {
			if (!qu.empty()) {
				cout << qu.front() << '\n';
				qu.pop();
			}
			else
				cout << -1 << '\n';
		}
		else if (cmd == "size")
			cout << qu.size() << '\n';
		else if (cmd == "empty")
			cout << (qu.empty() ? 1 : 0) << '\n';
		else if (cmd == "front")
			cout << (qu.empty() ? -1 : qu.front()) << '\n';
		else if (cmd == "back")
			cout << (qu.empty() ? -1 : qu.back()) << '\n';
	}

	return 0;
}


/* queue 컨테이너를 사용하지 않고 qu.front()요소의 인덱스를 의미하는 변수를 이용하여 직접 구현
// 단, vector 앞부분 원소는 계속 남아있으므로 push가 많아질수록 메모리 낭비 가능
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> v;
	int front_index = 0;
	int queue_size = 0;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string cmd;
		cin >> cmd;

		if (cmd == "push") {
			int X;
			cin >> X;
			v.push_back(X);
			queue_size++;
		}
		else if (cmd == "pop") {
			if (queue_size) {
				cout << v[front_index] << '\n';
				front_index++;
				queue_size--;
			}
			else
				cout << -1 << '\n';
		}
		else if (cmd == "size")
			cout << queue_size << '\n';
		else if (cmd == "empty")
			cout << (queue_size ? 0 : 1) << '\n';
		else if (cmd == "front")
			cout << (queue_size ? v[front_index] : -1) << '\n';
		else if (cmd == "back")
			cout << (queue_size ? v.back() : -1) << '\n';
	}

	return 0;
}
*/