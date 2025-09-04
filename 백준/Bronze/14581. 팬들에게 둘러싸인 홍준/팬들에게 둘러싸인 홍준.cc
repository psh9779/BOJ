#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	string fan = ":fan:";
	string hongjun;
	cin >> hongjun;
	hongjun = ":" + hongjun + ":";
	
	for (int cnt = 1; cnt < 10; cnt++) {
		cout << ((cnt == 5) ? hongjun : fan);
		if (cnt % 3 == 0)
			cout << '\n';
	}
	return 0;
}