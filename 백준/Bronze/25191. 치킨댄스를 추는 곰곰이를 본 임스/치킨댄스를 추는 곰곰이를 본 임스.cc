#include <iostream>
using namespace std;

// 치킨 1마리 당 콜라 2개나 맥주 1개를 같이 먹음
// 임스가 시켜먹을 수 있는 치킨의 총 개수는?
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;    // 1 <= N <= 1000이며, N은 정수
	cin >> N;    // 치킨 개수

	int A, B;    // 1 <= A,B <= 1000이며, A,B는 모두 정수
	cin >> A >> B;    // A, B : 콜라, 맥주의 개수

	cout << ((N >= A / 2 + B) ? (A / 2 + B) : N);

	return 0;
}