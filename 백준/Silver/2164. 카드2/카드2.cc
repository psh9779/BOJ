#include <iostream>
#include <queue>    // push(x), pop(), front(), back(), empty(), size()
using namespace std;

// queue 자료구조 이용 (앞 요소부터 제거(먼저 들어온것부터 제거 First out), 뒤로 삽입(이는 stack과 동일))
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	queue<int> qu;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		qu.push(i);

	// 반복문 1회당 요소의 개수는 -1이 됨
	while (qu.size() > 1) {
		qu.pop();

		// 맨 앞 요소를 맨 뒤로 보내기
		qu.push(qu.front());
		qu.pop();
	}
	
	cout << qu.front();    // 마지막 남은 카드 출력

	return 0;
}