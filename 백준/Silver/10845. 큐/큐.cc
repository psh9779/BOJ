#include <iostream>
#include <vector>
#include <string>
using namespace std;

// stl의 컨테이너 <queue>를 사용하지 않고 직접 구현
/*
	단, pop 명령어를 수행할 때, v.erase(v.begin())으로 벡터의 처음 요소만 제거하는 경우
	남은 모든 요소들을 앞으로 한 칸씩 밀어야 하므로 매 pop마다 O(n)이 걸림
		따라서, 앞의 인덱스를 관리하는 방식으로 구현
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> v;
	int front_index = 0;

	for (int cnt = 0; cnt < N; cnt++) {
		string cmd;
		cin >> cmd;

		int queue_size = v.size() - front_index;

		if (cmd == "push") {
			int X;
			cin >> X;
			v.push_back(X);
		}
		else if (cmd == "pop") {
			if (queue_size) {
				cout << v[front_index] << '\n';
				front_index++;
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



/* STL의 queue 컨테이너를 사용한 코드
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> qu;

	for (int cnt = 0; cnt < N; cnt++) {
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
*/