#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int cnt = N; cnt > 0; cnt--)
		cout << cnt << '\n';

	return 0;
}	