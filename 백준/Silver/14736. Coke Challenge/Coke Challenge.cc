#include <iostream>
#include <cmath>    // ceil()
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
using namespace std;

int main(){
	fastio;

	int N, K, A;    // K는 A의 배수
	cin >> N >> K >> A;

	int min_time;

	// i번 참가자의 총 걸린 시간 : K/A + si * (int(ceil(double(K/A)/ti)) - 1)
	for (int i = 0; i < N; i++) {
		int ti, si;
		cin >> ti >> si;

		int total_time = K / A + si * (int(ceil((double(K) / A) / ti)) - 1);

		if (i == 0 || total_time < min_time)
			min_time = total_time;
	}

	cout << min_time << '\n';

	return 0;
}