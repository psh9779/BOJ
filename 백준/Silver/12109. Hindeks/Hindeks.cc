#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

// h-index는 논문의 양과 인용 수치를 모두 고려함
// 즉, h-index == 인용수치 H 이상인 H개의 논문을 고를 수 있다는 의미
int main() {
	fastio;

	int N; cin >> N;

	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());    // 오름차순 정렬

	int h = 0;
	for (int j = 0; j < N; j++) {
		if (v[j] >= N - j) {
			h = N - j;    // v[j] 이상 인용된 논문이 뒤쪽으로 총 N-j개 존재 
			break;    // v[j] >= N-j를 만족하는 가장 작은 j를 찾으면 그때의 H = N-j가 최대 H-index임
		}	
	}
	cout << h << '\n';

	return 0;
}