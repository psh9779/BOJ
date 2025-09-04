#include <iostream>
#include <vector>
#include <algorithm>    // sort()
using namespace std;

// 출력 : 각 줄에 산술평균(mean), 중앙값(median), 최빈값(mode), 범위(range)
// 산술평균은 소수점 첫번째 자리에서 반올림 (단, -0.333인 경우 반올림 시 0으로 출력되어야 함)
// 중앙값을 찾기 위해 입력값들은 정렬 필요 -> N의 최댓값이 500,000이므로 O(NlogN) 시간복잡도를 갖는 방식 필요 -> sort() 이용
// 최빈값은 카운팅 배열 이용

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 500,000이고 N은 홀수

	vector<int> nums(N);    // vector는 내부 데이터를 힙에 동적 할당하므로, 스택 크기 제한 없이 큰 메모리를 사용할 수 있음
	vector<int> counts(16001, 0);    // -8000부터 8000까지 범위 (최빈값 찾기 위함)
	
	int sum = 0;    // 입력한 수들의 합
	for (int cnt = 0; cnt < N; cnt++) {
		cin >> nums[cnt];    // 입력되는 정수들은 "절댓값이 4000 이하인 정수"
		sum += nums[cnt];
		counts[nums[cnt] + 8000]++;
	}

	sort(nums.begin(), nums.end());

	// 산술평균
	double avg = (double)sum / N;
	// fixed + precision()은 "double 출력 시에만 영향을 줌"
	cout << fixed;
	cout.precision(0);
	cout << ((avg > -0.5 && avg < 0.5) ? 0 : avg) << '\n';    // "-0.3333 -> -0"등의 출력 방지

	// 중앙값
	cout << nums[nums.size() / 2] << '\n';    // 입력 개수인 N은 홀수라고 가정했기에

	// 최대 빈도수 구하기
	int maxFreq = 0;
	for (int i = 0; i < counts.size(); i++)
		if (counts[i] > maxFreq)
			maxFreq = counts[i];

	vector<int> modes;    // 최빈값들이 여러개일 경우를 대비하여 벡터 선언
	for (int j = 0; j < counts.size(); j++) {
		if (counts[j] == maxFreq)    // 최대 빈도수와 같으면 벡터에 push_back
			modes.push_back(j - 8000);
	}

	if (modes.size() == 1) cout << modes[0] << '\n';    // 최빈값이 1개이면 가장 작은 값 출력
	else cout << modes[1] << '\n';    // 최빈값이 여러개이면 두번째로 작은 값 출력

	// 범위 출력
	cout << nums[nums.size() - 1] - nums[0] << '\n';

	return 0;
}