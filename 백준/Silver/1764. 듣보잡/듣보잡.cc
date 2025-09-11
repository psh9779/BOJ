#include <iostream>
#include <set>    // 순서를 가진 집합(insert시 자동으로 사전순 정렬됨)
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	string input_name;

	set<string> listen;    // 듣도 못한 사람의 명단에는 중복이 없음
	for (int i = 0; i < N; i++) {
		cin >> input_name;
		listen.insert(input_name);
	}

	int cnt = 0;    // 듣보잡의 수
	set<string> res;    // 듣도 보도 못한 사람의 명단
	for (int j = 0; j < M; j++) {
		cin >> input_name;    // 보도 못한 사람의 명단에도 중복은 없음
		if (listen.count(input_name)) {
			res.insert(input_name);
			cnt++;
		}
	}
	
	cout << cnt << '\n';    // cnt를 쓰지 않고 res.size()를 출력해도 된다.
	for (auto it = res.begin(); it != res.end(); ++it) {    // it는 iterator 객체를 저장하므로 auto it으로 선언해야 함
		cout << *it << '\n';
	}

	/* C++의 foreach문(range-based for문)으로 작성 시
	for (auto& it : res) {    // it는 원소를 참조하는 것이므로 auto& it나 const auto& it로 선언해야 함
		cout << it << '\n';
	}
	*/

	return 0;
}