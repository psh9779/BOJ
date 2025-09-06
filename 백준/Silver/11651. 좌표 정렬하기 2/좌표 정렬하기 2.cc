#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 최대값이 10만이므로 O(NlogN)의 시간복잡도를 갖는 정렬 알고리즘을 사용해야 함

	vector<pair<int, int>> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i].first >> arr[i].second;

	sort(arr.begin(), arr.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
		if (a.second == b.second) return a.first < b.first;
		return a.second < b.second;
		});

	for (int j = 0; j < N; j++)
		cout << arr[j].first << ' ' << arr[j].second << '\n';
	
	return 0;
}