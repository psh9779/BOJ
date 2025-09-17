#include <iostream>
using namespace std;

// 내접, 외접을 모두 생각하여 Case 분류
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	for (int t = 0; t < T; t++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		
		int cond1 = (r1 + r2) * (r1 + r2);    // 외접하는 경우
		int cond2 = (r1 - r2) * (r1 - r2);    // 내접하는 경우

		if (d == 0) {    // 원의 두 중점이 같은 경우 (x1 == x2, y1 == y2)
			if (cond2 == 0)    // r1 == r2인 경우
				cout << "-1\n";
			else    // r1 != r2인 경우
				cout << "0\n";
		}
		else if (d == cond1 || d == cond2)    // 내접하거나 외접하는 특수한 경우
			cout << "1\n";
		else if (d < cond1 && d > cond2)    // 접점이 2개
			cout << "2\n";
		else
			cout << "0\n";
	}

	return 0;
}