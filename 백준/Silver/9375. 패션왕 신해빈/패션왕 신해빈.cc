#include <iostream>
#include <string>
#include <unordered_set>
#include <unordered_map>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		unordered_map<string, int> ump;
		unordered_set<string> st;
		while (n--) {
			string name, category;
			cin >> name >> category;
			ump[category]++;
			st.insert(category);
		}
		
		int case_num = 1;    // 총 경우의 수 (곱셈을 위해 1로 초기화)
		for (const string& s : st) {
			case_num *= (ump[s] + 1);    // 각 종류마다 입거나(ump[s]가지), 안입거나(1가지)
		}
		cout << case_num - 1 << '\n';    // 모두 안입는 경우 1가지를 제외해서 출력
	}

	return 0;
}





/* unordered_map만으로 해결 가능
#include <iostream>
#include <string>
#include <unordered_map>
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

int main() {
	fastio;

	int T;
	cin >> T;

	while (T--) {
		int n;
		cin >> n;

		unordered_map<string, int> ump;
		while (n--) {
			string name, category;
			cin >> name >> category;
			ump[category]++;
		}

		int case_num = 1;
		for (const auto& [key, value] : ump) {    // 구조적 바인딩(구조 분해) 기능을 이용 -> C++17에서 도입된 기능
			case_num *= (value + 1);
		}

		//    for (const pair<const string, int>& it : ump) {    // unordered_map의 각 요소는 pair<const string, int> 타입. 따라서, .first(키), .second(값)로 접근 가능
		//        case_num *= (it.second + 1);
		//    }

		// 또는 다음과 같이 작성 가능

		//    for(const auto& it : ump){
		//        case_num *= (it.second + 1);
		//    }

		cout << case_num - 1 << '\n';
	}

	return 0;
}
*/