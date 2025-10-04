#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

struct Participant {
	string name;
	int score;
	bool isHidden;
	int rank;
};

bool cmp(const Participant& a, const Participant& b) {
	if (a.score != b.score)
		return a.score > b.score;    // 점수 기준 오름차순 정렬
	return a.name < b.name;    // 이름 기준 사전순 정렬
};

int main() {
	fastio;

	int N; cin >> N;
	vector<Participant> v(N);

	// 입력 파싱 (입력줄은 공백없이 주어짐)
	for (int i = 0; i < N; i++) {
		string s; cin >> s;
		auto name_column_pos = s.find(":");
		auto name_comma_pos = s.find(",", name_column_pos);
		v[i].name = s.substr(name_column_pos + 2, name_comma_pos - name_column_pos - 3);    // name_column_pos + 2 위치부터 name_comma_pos - name_column_pos - 3의 길이만큼 추출

		auto score_column_pos = s.find(":", name_comma_pos);
		auto score_comma_pos = s.find(",", score_column_pos);
		v[i].score = stoi(s.substr(score_column_pos + 1, score_comma_pos - score_column_pos - 1));    // score 추출

		auto isHidden_column_pos = s.find(":", score_comma_pos);
		v[i].isHidden = stoi(s.substr(isHidden_column_pos + 1, 1));
	}
	
	sort(v.begin(), v.end(), cmp);

	// 동점자가 있다면 모두에게 가능한 높은 순위를 매기도록 함
	int dup_cnt = 1;
	v[0].rank = 1;
	for (int i = 1; i < N; i++) {
		if (v[i - 1].score == v[i].score) {
			v[i].rank = v[i - 1].rank;
			dup_cnt++;
		}
		else {
			v[i].rank = v[i - 1].rank + dup_cnt;
			dup_cnt = 1;
		}
	}
	
	// 비공개를 선택한 참가자는 보여주지 않음
	for (int i = 0; i < N; i++) {
		if (!v[i].isHidden)
			cout << v[i].rank << ' ' << v[i].name << ' ' << v[i].score << '\n';
	}

	return 0;
}