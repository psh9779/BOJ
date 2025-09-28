#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N;
	cin >> N;

	int count = 1;    // end_index == N인 경우를 미리 카운트
	int start_index = 1;
	int end_index = 1;
	int sum = 1;

	while (end_index != N) {
		if (sum < N) {
			end_index++;
			sum = sum + end_index;
		}
		else if (sum > N) {
			sum = sum - start_index;
			start_index++;
		}
		else {    // sum == N
			count++;
			end_index++;
			sum = sum + end_index;
		}
	}
	cout << count << '\n';

	return 0;
}