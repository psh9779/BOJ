// 첫번째 제출 (string으로 구현)
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





/* 두번째 제출 코드 (int로만 구현)
#include <iostream>
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

	deque<int> dq = {2,3,5,7};
	int size = 1;    // 자릿수가 1인 경우에는 반복문을 수행하지 않도록 함
	while (size != N) {
		deque<int> tmp_dq;
		while (!dq.empty()) {
			int tmp_num = dq.front();
			for (int i = 1; i < 10; i += 2) {
				int temp;
				temp = tmp_num * 10 + i;
				if (isPrime(temp))
					tmp_dq.push_back(temp);
			}
			dq.pop_front();
		}

		// swap()으로 내부 포인터를 단순 교환하면 O(1)의 시간이 걸림.
		// dq = tmp_dq;로 쓰면 모든 원소가 복사되어야 하므로 O(n)의 시간이 걸림.
		swap(dq, tmp_dq);
		size++;
	}

	while (!dq.empty()) {
		cout << dq.front() << '\n';
		dq.pop_front();
	}

	return 0;
}
*/






/* 세번째 제출 : DFS로 풀기
#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int N;
bool isPrime(int n) {
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

void DFS(int n, int jarisu) {
	// 한자리 수의 경우, 바로 출력하고 소수판별은 하지 않음
	// N == jarisu인 경우, 매개변수 n은 소수이므로 n을 그대로 출력해주면 됨
	if (N == jarisu) {
		cout << n << '\n';
		return;
	}

	// 인자로 전달한 jarisu 값이 입력으로 받은 자릿수와 다른 경우
	for(int i = 1; i < 10; i += 2){    // 일의 자리수가 홀수인 경우만 확인
		if (isPrime(n * 10 + i))
			DFS(n * 10 + i, jarisu + 1);    //  자릿수를 증가시켜서 DFS 재귀 호출
	}

	return;
}

int main() {
	fastio;
	cin >> N;

	DFS(2, 1);
	DFS(3, 1);
	DFS(5, 1);
	DFS(7, 1);

	return 0;
}
*/
