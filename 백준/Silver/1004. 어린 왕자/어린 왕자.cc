#include <iostream>
using namespace std;

// 생각 : 어떤 원이 출발점,도착점 중 하나만을 포함하는지, 아닌지로 구분해서 따져봐야할 문제
// 두 점을 모두 포함하거나 모두 포함하지 않는 원이라면 카운트 X
// 조건 : 행성계의 경계가 맞닿거나 서로 교차하는 경우는 없다. 또한, 출발점이나 도착점이 행성계 경계에 걸쳐진 경우 역시 입력으로 주어지지 않는다.
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int x1, y1, x2, y2, n;
		cin >> x1 >> y1 >> x2 >> y2 >> n;

		int inout_cnt = 0;    // 최소의 행성계 진입/이탈 횟수
		for (int j = 0; j < n; j++) {
			int cx, cy, r;
			cin >> cx >> cy >> r;

			int cond1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
			int cond2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);
			
			if ((cond1 < r * r && cond2 > r * r) || (cond1 > r * r && cond2 < r * r))
				inout_cnt++;

			/* if문 부분을 다음과 같이 작성할 수도 있음 (XOR 연산을 이용)
				bool check1 = (cond1 < r*r);
				bool check2 = (cond2 < r*r);

				if(check1 ^ check2)
					inout_cnt++;
			*/
		}
		cout << inout_cnt << '\n';
	}

	return 0;
}