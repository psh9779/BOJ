#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;    // N은 0 또는 1로 주어짐
	cin >> N;

	cout << (N ? "Leading the Way to the Future\n" : "YONSEI\n");
	return 0;
}