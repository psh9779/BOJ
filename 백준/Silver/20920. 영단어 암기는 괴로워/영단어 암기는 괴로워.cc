#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
	if (a.second != b.second)
		return a.second > b.second;    // 단어의 빈도수가 높은것부터 정렬
	else if (a.first.size() != b.first.size())
		return a.first.size() > b.first.size();    // 단어의 길이가 긴것부터 정렬
	return a.first < b.first;    // 사전순 정렬
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;
	
	unordered_map<string, int> freq_cnt;
	while (N--) {
		string temp;
		cin >> temp;
		if(temp.size() >= M)
			freq_cnt[temp]++;    // 새로운 key값에 대해서는 0으로 초기화된 후 ++연산
	}

	// unordered_map -> vector<pair<string,int>>로 바로 초기화
	vector<pair<string, int>> freq_words(freq_cnt.begin(), freq_cnt.end());
	sort(freq_words.begin(), freq_words.end(), cmp);

	for (const pair<string, int>& t : freq_words)    // const auto& t : freq_words로 써도 됨 (타입 자동 추론)
		cout << t.first << '\n';

	return 0;
}