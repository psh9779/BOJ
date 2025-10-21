#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

bool isOK(ll n) {
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i <= 999998; i += 6) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}

int main() {
	fastio;

	int N; cin >> N;

	while (N--) {
		ll S; cin >> S;
		if (isOK(S)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}