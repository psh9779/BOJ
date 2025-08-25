#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int sounds[8];
	int asc = 0, des = 0;

	for (int i = 0; i < 8; i++) {
		cin >> sounds[i];
		if (sounds[i] == i+1) asc++;
		else if (sounds[i] == 8 - i) des++;
	}

	if (asc == 8)
		cout << "ascending\n";
	else if (des == 8)
		cout << "descending\n";
	else
		cout << "mixed\n";

	return 0;
}