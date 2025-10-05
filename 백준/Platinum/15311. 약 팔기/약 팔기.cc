#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N;
	cin >> N;    // N == 1000000 이하의 입력에 대해 2000개의 약봉투에 약을 넣어서 어떤 방식으로든 줄 수 있어야 함.
	
	vector<int> v(2000);
	for (int i = 0; i < 1000; i++)
		v[i] = 1;
	for (int j = 1000; j < 2000; j++)
		v[j] = 1000;

	// 1000 이하의 값은 v[0] ~ v[999]로 대응 가능
	// 1000의 배수값은 v[1000] ~ v[1999]로 대응 가능
	// 2000개의 약봉투를 사용해야 1부터 1000000까지의 모든 정수를, 연속된 약봉투들의 합으로 만들 수 있는 배열을 만들 수 있음
	// 또한, 연속된 약봉투들의 합으로 만들 수 있어야 하므로, 1,1,...1,1000,1000,...,1000과 같이 배열에 배치되도록 해야함
	cout << 2000 << '\n';
	for (int k = 0; k < 2000; k++)
		cout << v[k] << ' ';

	return 0;
}