#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;    // 입력은 100,000보다 작거나 같은 자연수
	for (int i = 0; i < N; i++)
		cout << i + 1 << '\n';
	
	return 0;
}