// 문제에 O(g(n))의 정의가 주어져있음
// 구하고자 하는 것 : 함수 f(n) = a1*n+a0, 양의 정수 c, n0가 주어질 경우 "O(n) 정의를 만족하는지 아닌지 판단"
// 즉, g(n) = n을 기준으로 O(n) = {f(n) | 모든 n >= n0에 대해 f(n) <= c*n인 양의 상수 c와 n0가 존재한다}를 만족하는지 알아내는 문제

/*
	Case 1 : a1 <= c인 경우 -> n = n0일 때, f(n0) <= c * n0를 만족하면 O(n)의 정의를 만족
	Case 2 : a1 > c인 경우 -> 어떤 n0에 대해서도, 모든 n >= n0를 만족하는 n이 항상 f(n) <= c*n인 c와 n0가 존재할 수 없음
*/
#include <iostream>
using namespace std;

int main() {
	int a1, a0, c, n0;    // O(g(n))
	cin >> a1 >> a0 >> c >> n0;

	if (a1 <= c && a1 * n0 + a0 <= c * n0)
		cout << "1\n";
	else
		cout << "0\n";

	return 0;
}