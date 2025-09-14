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