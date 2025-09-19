#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 생각 : 최대값 비교만으로 해결하고자 함 (세준 + 세비의 모든 병사중에서 가장 강한 병사가 있는 편이 승리)
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;    // 100 이하의 값

	for (int i = 0; i < T; i++) {
		int N, M;    // N == 세준, M == 세비
		cin >> N >> M;

		vector<int> Sejun(N);
		vector<int> Sebi(M);

		for (int j = 0; j < N; j++)
			cin >> Sejun[j];
		for (int k = 0; k < M; k++)
			cin >> Sebi[k];
		
		// 내림차순 정렬
		sort(Sejun.begin(), Sejun.end(), greater<>());
		sort(Sebi.begin(), Sebi.end(), greater<>());

		if (Sejun[0] >= Sebi[0])
			cout << "S\n";
		else
			cout << "B\n";
	}

	return 0;
}





/* 쉽게 maxS, maxB 변수만을 갱신하여 풀이하는 코드
#include <iostream>
#include <algorithm>    // max()
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin >> T;

	while (T--) {
		int N, M;
		cin >> N >> M;

		int maxS = 0, maxB = 0;
		for (int i = 0; i < N; i++) {
			int S;
			cin >> S;
			maxS = max(maxS, S);
		}

		for (int j = 0; j < M; j++) {
			int B;
			cin >> B;
			maxB = max(maxB, B);
		}

		cout << (maxS >= maxB ? "S\n" : "B\n");
	}

	return 0;
}
*/
