#include <iostream>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int Ur, Tr, Uo, To;
	cin >> Ur >> Tr >> Uo >> To;

	int site_score = 56 * Ur + 24 * Tr + 14 * Uo + 6 * To;
	cout << site_score << '\n';

	return 0;
}