#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
	좌표 (x,y)의 경우 vector<pair<int,int>>가 직관적이고 정렬하기 편함
	vector<pair<int,int>> arr; 이면, "arr[i]의 타입은 pair<int,int>임" (매우 중요함)
	arr[i].first, arr[i].second로 첫번째값, 두번째값에 각각 접근 가능
*/

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<vector<int>> arr(N, vector<int>(2));
	for (int cnt = 0; cnt < N; cnt++)
		cin >> arr[cnt][0] >> arr[cnt][1];

	// vector<pair<int,int>> arr;를 정렬하면, x 기준으로 정렬, x가 같으면 y기준으로 자동 정렬
	// 단, y좌표를 우선으로 정렬하려면 비교 함수를 직접 넘겨줘야 함
	sort(arr.begin(), arr.end());

	for (int cnt = 0; cnt < N; cnt++)
		cout << arr[cnt][0] << ' ' << arr[cnt][1] << '\n';

	return 0;
}