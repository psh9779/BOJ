#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	char first_letter;
	cin >> first_letter;
	
	string clubs[5] = { "MatKor", "WiCys", "CyKor", "AlKor", "$clear" };
	for (int i = 0; i < 5; i++) {
		if (clubs[i][0] == first_letter) {
			cout << clubs[i];
			break;
		}
	}

	return 0;
}