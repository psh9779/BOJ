#include <iostream>
#include <map>
#define fastio ios::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
using namespace std;

int main() {
	fastio;

	ll n, k; cin >> n >> k;
	map<ll, pair<ll, ll>> mp;
	
	for (int i = 0; i < k; i++) {
		ll x, t, s; cin >> x >> t >> s;
		mp[x] = { t,s };
	}

	ll total_t = 0;
	ll before_pos = 0, next_pos;

	// p.first는 key, p.second는 value에 해당함
	for (auto& p : mp) {
		next_pos = p.first;
		ll t = p.second.first, s = p.second.second;

		total_t += next_pos - before_pos;

		// total_t < s인 경우에는 무조건 s초가 될 때까지 기다려야 출발할 수 있음
		if (total_t < s)
			total_t = s;
		else {
			ll temp = (total_t - s) % (2 * t);

			// 빨간불 상태인 경우
			if (temp >= t)
				total_t += (2 * t - temp);
		}

		before_pos = next_pos;
	}
	cout << total_t + (n - before_pos) << '\n';

	return 0;

}
