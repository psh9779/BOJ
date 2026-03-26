#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// The triple jump starts the first time any body part is inside the [30.0, 30.2] interval.
// The length is measured from 30.0 (not the actual location) to the smallest location that is at least 3 steps later than the start of the actual jump.
// This distance could be negative.
// If you never hit the interval, or did not take 3 steps after touching it, the distance is counted as 0.

// 즉, 세단뛰기는 [30.0 ~ 30.2] 간격을 밟고나서 세번 이후로 접촉된 위치들 중에서 가장 작은 위치까지의 거리로 계산
// 세단뛰기 거리는 시작점이 30.0부터 측정됨 (30.1이든, 30.2를 밟았든 항상 30.0부터 잰다.)
// 도약지점을 밟지 않거나, 도약 지점을 밟은 후 3번 이하으로 접촉되면 거리는 0으로 계산됨
int main(){
    fastio;

    int K;
    cin >> K;

    for(int cnt = 1; cnt <= K; cnt++){
        int n;
        cin >> n;

        vector<double> v(n);
        int start_idx;
        bool isStart = false;
        double start_pos = 0.0, min_pos = 100.0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(!isStart && v[i] >= 30.0 && v[i] <= 30.2){
                start_pos = v[i];
                start_idx = i;
                isStart = true;
                continue;
            }
            if(isStart && i >= start_idx + 3){
                min_pos = min(min_pos, v[i]);
            }
        }

        cout << "Data Set " << cnt << ":\n";
        double res_pos;
        if(!isStart || (n-1 - start_idx < 3)){
            res_pos = 0.0;
        }
        else{
            res_pos = min_pos - 30.0;
        }
        cout << fixed << setprecision(2) << res_pos << "\n\n";    // fixed + setprecision(n)으로 "소수 n자리까지 출력 + 반올림"
    }

    return 0;
}