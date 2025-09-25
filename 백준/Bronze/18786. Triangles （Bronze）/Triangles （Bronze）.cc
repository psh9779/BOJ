#include <iostream>
#include <vector>
#include <algorithm>    // max()
#include <cmath>    // abs()
#define fastio ios::sync_with_stdio(0); cin.tie(0)
using namespace std;

/*
	There are N fence posts at distinct points : 입력되는 점들은 서로 다른 점들
	As the area itself is not necessarily an integer, output two times the maximum area of a valid triangle formed by the fence posts : 삼각형의 면적이 정수가 아닐 수 있으므로, 2배 면적을 출력 (즉, "가로 * 세로"를 출력)

	한 변은 x축과 평행, 다른 변은 y축과 평행이어야 하므로 세 점 중 하나는 x축 평행 변을, 하나는 y축 평행 변을 공유해야 한다.
*/

int main() {
	fastio;
	
	int N;
	cin >> N;    // 3 <= N <= 100

	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}

	int max_res = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int x1 = v[i].first, y1 = v[i].second;
				int x2 = v[j].first, y2 = v[j].second;
				int x3 = v[k].first, y3 = v[k].second;

				int dx, dy, res = 0;
				if (x1 == x2 && (y3 == y1 || y3 == y2)) {
					res = std::abs(y2 - y1) * std::abs(x3 - x1);
				}
				else if (x1 == x3 && (y2 == y1 || y2 == y3)) {
					res = std::abs(y3 - y1) * std::abs(x2 - x1);
				}
				else if (x2 == x3 && (y1 == y2 || y1 == y3)) {
					res = std::abs(y3 - y2) * std::abs(x1 - x2);
				}

				max_res = max(res, max_res);
			}
		}
	}
	cout << max_res << '\n';

	return 0;
}