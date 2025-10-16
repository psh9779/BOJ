#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

vector<int> D;
int main() {
	fastio;

	int N; cin >> N;    // 1 <= N <= 100. N은 토핑의 종류의 수
	D.resize(N);

	int A, B; cin >> A >> B;    // 1 <= A,B <= 1000. A는 도우 가격, B는 토핑 가격
	int C; cin >> C;    // 1 <= C <= 10000. C는 도우의 열량

	for (int i = 0; i < N; i++)
		cin >> D[i];
	sort(D.begin(), D.end(), greater<>());

	int total_price = A;
	int total_Kcal = C;
	int max_K_per_price = C / A;

	for (int i = 0; i < N; i++) {
		total_price += B;
		total_Kcal += D[i];
		int K_per_price = total_Kcal / total_price;
		if (K_per_price > max_K_per_price)
			max_K_per_price = K_per_price;
	}
	cout << max_K_per_price << '\n';

	return 0;
}