#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_set<int> A;
	int A_cnt, B_cnt;
	cin >> A_cnt >> B_cnt;

	int temp, intersection_cnt = 0;
	for (int i = 0; i < A_cnt; i++) {
		cin >> temp;
		A.insert(temp);
	}

	for (int j = 0; j < B_cnt; j++) {
		cin >> temp;
		if (A.count(temp))
			intersection_cnt++;
	}
	cout << A_cnt + B_cnt - 2 * intersection_cnt << '\n';
	
	return 0;
}