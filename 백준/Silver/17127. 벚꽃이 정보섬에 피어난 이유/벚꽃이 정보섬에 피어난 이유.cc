#include <iostream>
#include <vector>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main() {
	fastio;

	int N; cin >> N;
	vector<int> v(N);
	for (int i = 0; i < N; i++)
		cin >> v[i];

	int max_n = 0;

	int temp1 = 1;
	for (int i = 0; i < N - 3; i++) {
		temp1 *= v[i];
		int temp2 = 1;
		for (int j = i + 1; j < N - 2; j++) {
			temp2 *= v[j];
			int temp3 = 1;
			for (int k = j + 1; k < N - 1; k++) {
				temp3 *= v[k];
				int temp4 = 1;
				for (int t = k + 1; t < N; t++) {
					temp4 *= v[t];
				}
				if (max_n < temp1 + temp2 + temp3 + temp4)
					max_n = temp1 + temp2 + temp3 + temp4;
			}
		}
	}
	cout << max_n << '\n';

	return 0;
}