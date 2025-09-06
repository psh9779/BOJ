#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 정렬 기준 : 나이가 증가하는 순으로, 나이가 같으면 먼저 입력된 사람 순으로
// 전역에 구조체 배열을 선언하여 구현
struct Member {    // 회원 구조체 정의
	int age;
	string name;
	int order;
};

bool sortMembers(const Member& a, const Member& b) {
	if (a.age == b.age)
		return a.order < b.order;
	return a.age < b.age;
}

Member arr[100000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i].age >> arr[i].name;
		arr[i].order = i;
	}

	sort(arr, arr + N, sortMembers);

	for (int j = 0; j < N; j++)
		cout << arr[j].age << ' ' << arr[j].name << '\n';

	return 0;
}


/* vector를 이용한 코드
#include <iostream>
#include <vector>
#include <algorithm>    // sort()
using namespace std;

struct Member {
	int age;
	string name;
	int order;
};

bool sortMembers(const Member& a, const Member& b) {    // a와 b는 const Member 타입의 참조에 해당
	if (a.age == b.age)
		return a.order < b.order;
	return a.age < b.age;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<Member> arr(N);
	for (int cnt = 0; cnt < N; cnt++) {
		cin >> arr[cnt].age >> arr[cnt].name;
		arr[cnt].order = cnt;
	}

	sort(arr.begin(), arr.end(), sortMembers);    // vector는 배열처럼 직접 포인트 연산을 하지 않고, 멤버 함수를 통해 요소 범위를 다룸.

	for (int cnt = 0; cnt < N; cnt++)
		cout << arr[cnt].age << ' ' << arr[cnt].name << '\n';

	return 0;
}
*/

/* stable_sort() 및 pair<int, string> 자료형을 이용한 코드
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector <pair<int, string>> members(N);
	for (int cnt = 0; cnt < N; cnt++)
		cin >> members[cnt].first >> members[cnt].second;

	// 나이가 같은 회원의 입력 순서가 보장되어야 하므로 stable_sort()를 사용해야 한다.
	stable_sort(members.begin(), members.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
		});
	
	for (int cnt = 0; cnt < N; cnt++)
		cout << members[cnt].first << ' ' << members[cnt].second << '\n';

	return 0;
}
*/
