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





/* 수학적 방식으로 풀이 (올림 처리)
#include <iostream>
#include <climits>    // LLONG_MAX
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	fastio;

	ll N, K, A;
	cin >> N >> K >> A;

	long long min_time = LLONG_MAX;

	for (int i = 0; i < N; i++) {
		ll ti, si;
		cin >> ti >> si;

		ll unit_dist = ti * A;    // 한 번 달리고 쉬는 단위 거리

		ll repeat = K / unit_dist;    // 반복 횟수 (ti와 si를 모두 거치는)

		ll rest = K % unit_dist;    // 남은 거리

		ll total = repeat * (ti + si) + (rest + A - 1) / A;    // 총 시간 == 완전 반복 시간 + 남은 거리 이동 시간(올림처리)

		if (rest == 0)
			total -= si;    // 남은 거리가 0인 경우에는 마지막 쉬는 시간 제거

		if (total < min_time)    // 최솟값 갱신
			min_time = total;
	}

	cout << min_time << '\n';
	return 0;
}
*/
