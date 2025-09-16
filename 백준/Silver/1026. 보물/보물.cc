#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// S의 최솟값은 A배열을 오름차순 정렬하고 B배열을 내림차순 정렬했을 때, 주어진 수식에 의해 계산된 S.
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin >> N;

	vector<int> A(N), B(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int j = 0; j < N; j++)
		cin >> B[j];

	sort(A.begin(), A.end());    // 오름차순 정렬
	sort(B.begin(), B.end(), greater<int>());    // 내림차순 정렬

	int S_min = 0;
	for (int k = 0; k < N; k++)
		S_min += A[k] * B[k];

	cout << S_min << '\n';

	return 0;
}