#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	string label = "WelcomeToSMUPC";
	int idx = (N-1) % label.length();
	
	cout << label[idx] << '\n';

	return 0;
}