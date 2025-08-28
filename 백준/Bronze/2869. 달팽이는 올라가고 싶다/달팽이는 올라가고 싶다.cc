#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, V, day;
	cin >> A >> B >> V;
	// day일 째 올라갈 수 있는 최대 위치는 A + (A-B)*(day-1). (단, day >= 1)
	// V <= A + (A-B)*(day-1)인 식을 만족하는 day값을 구해야 함.
	// 위의 식을 정리하면 (V-A) / (A-B) + 1 <= day.
	// 따라서, (V-A) % (A-B)의 값에 따라 가장 최소의 day값을 결정
	day = (V - A) / (A - B) + 1;
	if ((V - A) % (A - B))    // (V-A)가 (A-B)로 나누어 떨어지지 않는 경우
		day++;
	cout << day << '\n';

	return 0;
}


/* #3 "test Case"에서 시간 초과가 발생한 코드 (반복문 대신 수학 공식을 이용해 O(1)로 해결하라는 뜻)
#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, V, res = 0, day = 1;
	cin >> A >> B >> V;

	// V미터인 나무를 올라가야하며, 낮에는 +A, 밤에는 -B미터 이동
	res = A;
	while (res < V) {    // res >= V이면 탈출 (단, 이때의 res는 하루의 최대 올라간 위치를 의미. 즉, 밤이 되기 전의 최대 위치)
		res = res - B + A;
		day++;
	}
	cout << day << '\n';

	return 0;
}
*/