#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	cout << (N % 2 ? "SK\n" : "CY\n");

	return 0;
}