#include <iostream>
#include <unordered_map>    // 해당 숫자 카드가 몇개 있는가? -> unordered_map, 해당 숫자의 유무 -> unordered_set
using namespace std;

/*
	unordered_map : (키가 순서 상관 없을 때 최적. 즉, 비정렬. O(1))
	map : (키가 정렬되어 있어야 할 경우 사용. O(logN))
*/
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	unordered_map<int, int> card_cnt;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		card_cnt[temp] += 1;    // unorederd_map은 키가 없을 때 접근하면 자동으로 0으로 초기화된다.
	}

	int M;
	cin >> M;

	for (int j = 0; j < M; j++) {
		int temp;
		cin >> temp;
		if (j > 0) cout << ' ';
		cout << card_cnt[temp];
	}
	cout << '\n';

	return 0;
}