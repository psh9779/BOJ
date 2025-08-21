#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int M, K;    // int형 정수는 21억..쯤 커버 가능
	cin >> M >> K;
	if (M % K == 0) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}