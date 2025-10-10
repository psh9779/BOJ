#include <iostream>
#include <vector>
#include <algorithm>    // stable_sort()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second < b.second;    // 값이 다를 때만 a.second < b.second가 되도록 순서를 바꾸라는 의미 (등호 포함 X)
}

int main() {
	fastio;

	int N;
	cin >> N;

	vector<pair<int, int>> B(N);
	vector<int> A(N);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		B[i].first = i;
		B[i].second = A[i];
	}

	// 같은 값일 때 입력 순서를 유지
	// B.second의 값을 기준으로 정렬해야하므로 비교 함수 작성 필요
	stable_sort(B.begin(), B.end(), cmp);

	vector<int> P(N);
	for (int p = 0; p < N; p++) {
		P[B[p].first] = p;
	}

	for (int q = 0; q < N; q++) {
		if (q > 0) cout << ' ';
		cout << P[q];
	}
	cout << '\n';

	return 0;
}