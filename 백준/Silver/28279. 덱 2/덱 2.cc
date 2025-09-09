#include <iostream>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	deque<int> dq;    // deque<int> dq(N);이라 하면, 길이가 N인 deque<int>가 만들어지고 모든 요소가 기본값(int의 기본값은 0)으로 초기화됨에 주의

	while (N--) {
		int cmd;
		cin >> cmd;

		// switch문의 동작 방식 : switch문 안에서 case값이 처음으로 일치하는곳이 있다면 해당 case부터 시작해서 실행되는데, 중간에 break가 없으면 다음 case들도 순서대로 실행됨
		switch (cmd) {
		case 1: {
			int X;    // 지역변수 선언이므로 중괄호 필수
			cin >> X;
			dq.push_front(X);
			break;
		}
		case 2:
		{
			int X;    // 지역변수 선언이므로 중괄호 필수
			cin >> X;
			dq.push_back(X);
			break;
		}
		case 3:
			if (dq.size()) {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
			else
				cout << -1 << '\n';
			break;
		case 4:
			if (dq.size()) {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
			else
				cout << -1 << '\n';
			break;
		case 5:
			cout << dq.size() << '\n';
			break;
		case 6:
			cout << (dq.empty() ? 1 : 0) << '\n';
			break;
		case 7:
			if (!dq.empty())
				cout << dq.front() << '\n';
			else
				cout << -1 << '\n';
			break;
		case 8:
			if (!dq.empty())
				cout << dq.back() << '\n';
			else
				cout << -1 << '\n';
			break;
		}
	}

	return 0;
}