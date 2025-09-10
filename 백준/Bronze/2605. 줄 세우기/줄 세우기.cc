#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	// 학생의 수는 100이하이고, n번째 학생이 뽑을 수 있는 번호는 0부터 n-1까지.
	// 따라서, O(N^2)도 시간 초과가 발생할 일은 없음
	int n;
	cin >> n;
	
	vector<int> v(n);
	for (int i = 0; i < n; i++) {    // n회 반복
		int move_n;
		cin >> move_n;
		
		v[i] = i+1;
		for (int j = 0; j < move_n; j++) {
			int temp = v[i - j];
			v[i - j] = v[i - j - 1];
			v[i - j - 1] = temp;
		}
	}

	for (int cnt = 0; cnt < n; cnt++) {
		if (cnt > 0) cout << ' ';
		cout << v[cnt];
	}

	return 0;
}


/*
// std::vector 클래스의 insert() 멤버 함수를 사용해서 빠르게 해결 가능
// vector.insert(pos, value) : pos(iterator 값) 위치에 value를 끼워 넣고, 그 뒤의 원소들은 한 칸씩 뒤로 밀림
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	vector<int> v(n);
	for (int value = 1; value <= n; value++) {
		int move_n;
		cin >> move_n;
		v.insert(v.end() - move_n, value);
	}

	for (int cnt = 0; cnt < n; cnt++) {
		if (cnt > 0) cout << ' ';
		cout << v[cnt];
	}

	return 0;
}
*/