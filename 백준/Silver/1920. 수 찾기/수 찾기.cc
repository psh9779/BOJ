#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<int> s;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		s.insert(temp);    // 해시 충돌이 없으므로 O(1)
	}

	int M;
	cin >> M;
	for (int j = 0; j < M; j++) {
		int temp;
		cin >> temp;
		cout << s.count(temp) << '\n';    // 존재 여부 확인도 해시 테이블에서 바로 접근. O(1)
	}

	return 0;
}

/* 정렬 + <algorithm> 헤더의 binary_search()를 사용한 코드 (이분 탐색의 시간 복잡도 == O(logN))
#include <iostream>
#include <vector>
#include <algorithm>    // sort(), binary_search()
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		cout << (binary_search(arr.begin(), arr.end(), x) ? 1 : 0) << '\n';    // binary_search()는 true/false를 반환
	}
}
*/

/* 정렬 + binary search를 직접 구현한 코드
#include <iostream>
#include <vector>
#include <algorithm>    // sort()
using namespace std;

bool bi_search(const vector<int>& arr, int target) {
	int left = 0;
	int right = arr.size() - 1;

	while (left <= right) {
		int mid = left + (right - left) / 2;    // int mid = (left+right)/2;로 작성 시, left+right의 값이 int 범위를 넘어가면 정수 오버플로우가 발생 가능.
		if (arr[mid] == target)
			return true;
		else if (arr[mid] < target)
			left = mid + 1;    // 오른쪽 구간 탐색을 위해
		else
			right = mid - 1;    // 왼쪽 구간 탐색을 위해
	}

	return false;    // 못찾은 경우
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		cout << (bi_search(arr, x) ? 1 : 0) << '\n';    // binary_search()는 true/false를 반환
	}

	return 0;
}
*/
