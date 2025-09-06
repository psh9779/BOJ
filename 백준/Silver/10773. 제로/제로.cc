#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K;
	cin >> K;

	stack<int> s;
	for (int i = 0; i < K; i++) {
		int temp;
		cin >> temp;
		if (temp)
			s.push(temp);
		else
			s.pop();
	}

	int stack_size = s.size(), sum = 0;
	for (int cnt = 0; cnt < stack_size; cnt++) {
		sum += s.top();    // 스택의 맨 위의 요소를 확인 및 연산
		s.pop();    // 반환값이 없음. 단순히 스택의 맨 위의 요소를 제거만 함
	}
	cout << sum << '\n';

	return 0;
}

/* vector로 구현
#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int K;
	cin >> K;

	vector<int> v;
	for (int i = 0; i < K; i++) {
		int temp;
		cin >> temp;
		if (temp == 0)
			v.pop_back();
		else
			v.push_back(temp);
	}

	int vector_size = v.size();
	int sum = 0;

	// 다음과 같이 벡터 순회로도 합계를 구할 수 있음 : for(int x : v) sum += x;
	for (int cnt = 0; cnt < vector_size; cnt++) {
		sum += v.back();    // vector의 가장 마지막 요소 확인
		v.pop_back();    // vector의 가장 마지막 요소 꺼내기
	}

	cout << sum << '\n';

	return 0;
}
*/