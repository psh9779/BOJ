#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M;
	cin >> N >> M;

	if (100 * N >= M) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}	