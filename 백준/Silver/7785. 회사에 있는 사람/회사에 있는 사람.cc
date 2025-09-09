// 1. <set>을 이용하여 출력시에만 역순으로 출력
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<string> s;

	while (n--) {
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			s.insert(name);    // O(log N)
		else if (state == "leave")
			s.erase(name);    // O(log N)
	}

	// 오름차순으로 정렬된 set의 요소들은 역순 출력
	/*
		set 요소는 iterator를 사용하여 접근함
		iterator는 set의 요소를 가리키고, 실제 값은 *연산으로 접근
		사전 순이면 s.begin(), s.end()를, 역순이면 s.rbegin(), s.rend()로 iterator 설정
	*/
	for (auto it = s.rbegin(); it != s.rend(); it++)    // it는 iterator의 약자
		cout << *it << '\n';

	return 0;
}


/* 2. set<string, greater<string>>으로 선언하여 해결하는 방법 (가장 직관적인 풀이)
	// greater<string>은 정렬 기준(comparator)을 내림차순 정렬(사전 역순 정렬)로 바꿈
	// 기본 set은 내부적으로 less<string>를 사용해서 오름차순 정렬(사전순 정렬)
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	set<string, greater<string>> s;

	while (n--) {
		string name, state;
		cin >> name >> state;

		if (state == "enter")
			s.insert(name);    // O(log N)
		else if (state == "leave")
			s.erase(name);    // O(log N)
	}

	for (auto it = s.begin(); it != s.end(); it++)
		cout << *it << '\n';

	return 0;
}
*/


/* 3. unordered_set, vector, sort()를 이용하는 방법 (동명이인이 없기에 unordered_set을 사용할 수 있음)
#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	unordered_set<string> unordered_s;
	while (n--) {
		string name, state;
		cin >> name >> state;
		if (state == "enter")
			unordered_s.insert(name);
		else if (state == "leave")
			unordered_s.erase(name);
	}

	vector<string> v;
	for (auto it = unordered_s.begin(); it != unordered_s.end(); it++)
		v.push_back(*it);

	sort(v.begin(), v.end());    // 사전순 정렬 : O(NlogN)
	for (int cnt = v.size() - 1; cnt >= 0; cnt--)
		cout << v[cnt] << '\n';

	return 0;
}
*/