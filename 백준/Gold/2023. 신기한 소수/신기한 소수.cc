#include <iostream>
#include <string>
#include <deque>
#include <utility>    // std::swap()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool isPrime(int n) {
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i += 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	return true;
}

// 2,3,5,7로 시작하는 수만 확인하면 됨
int main() {
	fastio;
	int N; cin >> N;

	deque<string> dq = { "2","3","5","7" };
	int size = 1;
	while (size != N) {
		deque<string> tmp_dq;
		while (!dq.empty()) {
			string num = dq.front();
			for (int i = 1; i < 10; i += 2) {
				string temp;
				temp = num + to_string(i);
				if (isPrime(stoi(temp)))
					tmp_dq.push_back(temp);
			}
			dq.pop_front();
		}
		swap(dq, tmp_dq);    // swap()으로 내부 포인터만 교환 (O(1))
		size++;
	}

	while (!dq.empty()) {
		cout << dq.front() << '\n';
		dq.pop_front();
	}

	return 0;
}