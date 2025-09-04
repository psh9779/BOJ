#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 1. 길이순으로 오름차순 정렬, 길이가 같으면 사전순으로 정렬
// 2. 단, 중복된 단어는 하나만 남기고 제거해야 함
// 시간복잡도가 O(n^2)인 병렬 알고리즘은 최악의 경우 4억회의 연산이 필요하므로 시간초과가 발생
// 따라서, 시간복잡도가 O(nlogn)인 방법을 사용해야 함. 이는 최악의 경우 20000 * log_2 20000 < 20000 * 16 이므로 연산량은 1억회도 안되어 1초 미만의 시간이 걸림
// std::sort()의 경우, Quicksort, Heapsort, Insertion Sort를 결합한 Introsort 알고리즘을 이용하여 O(nlogn)의 시간복잡도를 보장함
bool compareString(const string& a, const string& b) {
	if (a.length() != b.length())
		return a.length() < b.length();    // 문자열의 길이가 다르면 길이가 짧은거부터 정렬
	return a < b;    // 문자열의 길이가 같으면 사전순 정렬
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 1 <= N <= 20000

	string dict[20000];    // string 요소 하나 당 약 32바이트로 생각 -> 64만 바이트 == 640KB == 0.64MB < 1MB (Windows 기본 스택 크기)
	for (int cnt = 0; cnt < N; cnt++)
		cin >> dict[cnt];

	sort(dict, dict + N, compareString);    // 세번째 인자로 함수 포인터를 전달 (정렬 조건 전달)

	// 중복된 경우 한 번만 출력
	for (int cnt = 0; cnt < N; cnt++) {
		if (cnt > 0 && (dict[cnt - 1] == dict[cnt]))
			continue;    // 이전 값과 현재 값이 같으면 다음 요소로 건너뛰기
		cout << dict[cnt] << '\n';
	}

	return 0;
}