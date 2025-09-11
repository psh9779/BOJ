#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/* 문제를 빨리 이해해서 푸는게 중요함
    (예제 입력 1)
			큐  스택 스택  큐
<초기상태>  [1] [2]  [3]  [4]
<2 입력시>  [2] [2]  [3]  [1]  ->  마지막 큐에서 4가 pop()됨
<4 입력시>  [4] [2]  [3]  [2]  ->  마지막 큐에서 1이 pop()됨
<7 입력시>  [7] [2]  [3]  [4]  ->  마지막 큐에서 2가 pop() 됨

스택 자료구조인 경우에는 push()되는 요소와 pop()되는 요소가 같으므로 생각할 필요가 없음
- 큐 자료구조인 경우만 생각

		    큐 큐
<초기 상태>  1  4
<2 입력 시>  2  1   4리턴
<4 입력 시>  4  2   1리턴
<7 입력 시>  7  4   2리턴

한쪽으로 들어가고 다른한쪽으로 리턴되는 구조 -> 큐 생각 가능
단, 큐일때마다 push,push,pop,pop 하게되면 시간복잡도가 O(MxN)이 되어 불가능

수열의 각 원소들의 길이는 "1이상 10억 이하"
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 100,000

	queue<int> qu;

	vector<int> structure(N);
	for (int i = 0; i < N; i++)
		cin >> structure[i];

	vector<int> init_val(N);
	for (int j = 0; j < N; j++)
		cin >> init_val[j];

	for (int k = N - 1; k >= 0; k--) {    // 역순으로 큐에 넣어야 생각한 대로 출력된다.
		if (structure[k] == 0)    // queue 자료구조인 경우에만 삽입
			qu.push(init_val[k]);
	}

	int M;
	cin >> M;

	for (int cnt = 0; cnt < M; cnt++) {
		int temp;
		cin >> temp;

		if (cnt > 0) cout << ' ';
		qu.push(temp);    // 수열 C의 원소들을 차례대로 M회 삽입
		cout << qu.front();
		qu.pop();
	}

	return 0;
}



/* queue를 사용할 경우, push()를 역순으로 해야함 -> deque의 push_front()를 사용해서 덱으로 구현 가능
#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> type(N);
	for (int i = 0; i < N; i++)
		cin >> type[i];

	vector<int> init(N);
	for (int j = 0; j < N; j++)
		cin >> init[j];

	deque<int> dq;
	for (int k = 0; k < N; k++) {
		if (type[k] == 0)
			dq.push_back(init[k]);    // 덱에 오름차순으로 초기값 push
	}

	int M;
	cin >> M;

	for (int m = 0; m < M; m++) {
		int x;
		cin >> x;
		dq.push_front(x);    // 새로운 값은 앞쪽으로 삽입
		if (m > 0) cout << ' ';
		cout << dq.back();    // 맨 뒤쪽 값이 출력해야 할 리턴값이 됨
		dq.pop_back();    // 맨 뒤의 값을 제거
	}

	return 0;
}
*/
