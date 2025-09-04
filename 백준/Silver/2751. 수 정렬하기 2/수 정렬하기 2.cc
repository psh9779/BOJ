#include <iostream>
#include <algorithm>    // std::sort()는 <algorithm> 헤더에 정의되어 있음
using namespace std;

// 시간복잡도가 O(N^2)인 알고리즘은 최악의 경우 10^12회의 연산횟수가 발생하므로
// 시간복잡도가 O(NlogN)인 알고리즘을 사용해야 함 (시간 제한 2초)
int nums[1000000];    // 전역변수는 데이터 영역에 선언되어 스택 영역보다 많은 메모리를 선언 가능

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 1,000,000
	for (int i = 0; i < N; i++)
		cin >> nums[i];

	sort(nums, nums + N);

	for (int i = 0; i < N; i++)
		cout << nums[i] << '\n';

	return 0;
}



/* vector를 사용하는 경우
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	for (int j = 0; j < N; j++)
		cout << arr[j] << '\n';

	return 0;
}
*/