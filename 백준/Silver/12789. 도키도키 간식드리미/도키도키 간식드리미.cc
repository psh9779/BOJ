#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// 모든 사람들이 순서대로 간식을 받을 수 있는지 확인하는 프로그램 작성
// 정답은 맞았으나, 코드 리팩토링이 필요했던 문제
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	queue<int> qu;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		qu.push(num);
	}

	int target = 1;

	// 큐의 동작부터 생각
	while (!qu.empty()) {
		if (qu.front() == target) {    // 큐에서 제거
			qu.pop();
			target++;
		}
		else if (!s.empty() && s.top() == target) {    // (중요) 큐에서 제거하지 못한 경우 스택에서 제거 가능한지 확인
			s.pop();
			target++;
		}
		else {    // 스택으로 곧바로 이동
			s.push(qu.front());
			qu.pop();
		}
	}

	// 스택이 비워져 있지 않으면 비우기
	while (!s.empty() && s.top() == target) {
		s.pop();
		target++;
	}

	// 큐는 무조건 비워짐. 스택에 잔여 요소가 있는지로 판단
	cout << (s.empty() ? "Nice\n" : "Sad\n");

	return 0;
}