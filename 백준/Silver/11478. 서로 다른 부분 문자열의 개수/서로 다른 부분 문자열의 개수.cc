// 부분 문자열을 어떻게 구해낼 것인가를 생각!
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;

	int S_len = S.length();
	unordered_set<string> sub_str;

	// S의 길이는 1000이하이므로 O(N^2)의 시간복잡도도 커버 가능
	for (int i = 0; i < S_len; i++) {
		string temp;    // C++에서 std::string은 클래스 타입이므로 기본 생성자 호출의 경우, 빈 문자열("")로 초기화 됨
		for (int j = i; j < S_len; j++) {
			temp += S[j];
			sub_str.insert(temp);    // 집합이므로 이미 존재하면 중복 없이 알아서 처리됨
		}
	}
	cout << sub_str.size() << '\n';
	
	return 0;
}



/* std::string 클래스의 멤버 함수인 substr()을 이용
// - string substr(size_t pos = 0, size_t len = npos)
// - pos에서 시작해서 len 길이만큼의 새로운 문자열을 리턴.
#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string S;
	cin >> S;

	unordered_set<string> sub_strs;
	int len = S.length();

	for (int i = 0; i < len; i++) {
		for (int j = i; j < len; j++) {
			sub_strs.insert(S.substr(i, j - i + 1));    // i에서 시작해서 길이 j만큼의 새로운 문자열을 삽입
		}
	}
	cout << sub_strs.size();

	return 0;
}
*/
