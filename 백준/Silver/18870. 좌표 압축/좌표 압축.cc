#include <iostream>
#include <vector>    // erase()
#include <algorithm>    // sort(), unique(), lower_bound()

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	vector<int> v(N);    // 원본
	for (int i = 0; i < N; i++)
		cin >> v[i];

	vector<int> copy_v = v;    // 복사본

	sort(copy_v.begin(), copy_v.end());
	// unique()는 연속된 중복만 처리하므로 우선 정렬을 한 후 적용해야 함
	// unique()는 연속된 중복 원소가 있으면 그중 하나만 남기고, 남은 원소들은 앞으로 덮어쓰기해서 채워주고, 중복된 나머지들은 컨테이너의 뒤쪽으로 밀려남
	// unique()는 "중복 없는 구간의 끝"을 가리키는 iterator를 반환함
	// erase(first, last)는 구간 [first, last)의 원소를 삭제. 즉, first부터 last 직전까지 제거
	// unique()는 O(N), erase()는 삭제 구간 뒤쪽의 원소가 없으므로 O(1). 따라서, O(N+1) == O(N) 
	copy_v.erase(unique(copy_v.begin(), copy_v.end()), copy_v.end());    // copy_v는 정렬 + 중복이 제거된 상태로 남음

	// lower_bound()는 이진 탐색 -> O(logN)
	for (int j = 0; j < N; j++) {
		// lower_bound(first, last, value) : 정렬된 구간 [first, last)에서 value 이상인 첫 번째 원소의 위치 반환
		cout << lower_bound(copy_v.begin(), copy_v.end(), v[j]) - copy_v.begin() << ' ';    // 반복자(iterator)간의 뺄겜 결과는 std::ptrdiff_t 타입의 정수형 값.
	}

	return 0;
}


/* unordered_map을 이용한 코드
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<int> v(N);    // 원본
	for (int i = 0; i < N; i++)
		cin >> v[i];

	vector<int> copy_v = v;    // 복사본 (정렬 후 중복제거)
	sort(copy_v.begin(), copy_v.end());
	copy_v.erase(unique(copy_v.begin(), copy_v.end()), copy_v.end());

	unordered_map<int, int> mp;    // key와 value 한 쌍으로 이루어짐. 탐색, 삽입, 삭제가 평균 O(1)
	for (int cnt = 0; cnt < copy_v.size(); cnt++)
		mp[copy_v[cnt]] = cnt;    // 해시 충돌은 발생할 일이 없음 (정렬된 key와 그에 맞는 value도 1씩 증가)

	for (int cnt = 0; cnt < N; cnt++)
		cout << mp[v[cnt]] << ' ';    // v[cnt]라는 key에 대응되는 value(크기 순서 인덱스)를 출력

	return 0;
}
*/