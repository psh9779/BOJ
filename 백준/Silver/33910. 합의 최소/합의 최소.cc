#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
	fastio;

	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	int cur_min = 1000000;
	ll min_total = 0;
	// 뒤에서부터 확인하는게 좋을것 같음
	for (int j = N - 1; j >= 0; j--) {
		if (arr[j] < cur_min)
			cur_min = arr[j];
		min_total += cur_min;
	}
	
	cout << min_total << '\n';

	return 0;
}