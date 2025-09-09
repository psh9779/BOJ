#include <iostream>
#include <string>    // stoi()
#include <vector>
#include <unordered_map>    // 순서는 정렬될 필요가 없음. 단, unordered_set의 경우에는 단일 값만 저장하므로 적합 X, 반면 unordered_map은 각 요소가 key와 value 한쌍으로 구성
#include <cctype>    // isdigit()
using namespace std;

// 입력으로 들어오는 string은 반드시 도감에 있으므로 해당 string이 없는지에 대한 판단은 할 필요가 없음
// find()를 통해 iterator를 리턴받아 검사할 필요가 없음
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	unordered_map<string, int> guide_book;    // key = 이름, value = 번호 (O(1))
	vector<string> v(N);    // 인덱스 = 번호, value = 이름 (O(1))

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		guide_book[temp] = i + 1;
		v[i] = temp;
	}
	
	for (int j = 0; j < M; j++) {
		string input_find;
		cin >> input_find;

		if (isdigit(input_find[0]))    // isdigit()의 입력은 int지만 보통 char형 문자 하나를 입력으로 받아 숫자 문자열인지를 판단
			cout << v[stoi(input_find) - 1] << '\n';
		else
			cout << guide_book[input_find] << '\n';

		/* <cctype> 헤더의 isdigit()을 사용하지 않을 경우
			if (input_find[0] >= '0' && input_find[0] <= '9')    // input_find[0]이 0~9의 숫자이면 input_find는 숫자 문자열에 해당
				cout << v[stoi(input_find) - 1] << '\n';
			else
				cout << guide_book[input_find] << '\n';
		*/
	}

	return 0;
}

/* unordered_map 2개를 이용하여 구현 -> unordered_map + vector를 이용한 방식에 비해 메모리 효율은 떨어지는 방식임
#include <iostream>
#include <unordered_map>
#include <string>    // std::string, stoi()
#include <cctype>    // isdigit()
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	unordered_map<string, int> guide_s_i;
	unordered_map<int, string> guide_i_s;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		guide_s_i[temp] = i + 1;
		guide_i_s[i + 1] = temp;
	}

	for (int j = 0; j < M; j++) {
		string find_input;
		cin >> find_input;

		if (isdigit(find_input[0]))
			cout << guide_i_s[stoi(find_input)] << '\n';
		else
			cout << guide_s_i[find_input] << '\n';
	}

	return 0;
}
*/