#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

double dist(int x1, int y1, int x2, int y2){
    int dx = x1 - x2;
    int dy = y1 - y2;
    return sqrt(dx * dx + dy * dy);
}

int main(){
    fastio;

    int yumi_x, yumi_y;
    cin >> yumi_x >> yumi_y;

    vector<pair<double, double>> p(3);
    for(int i = 0; i < 3; i++){
        cin >> p[i].first >> p[i].second;
    }

    // 유미 -> 0번 -> 1번 -> 2번
    // 유미 -> 0번 -> 2번 -> 1번
    // 유미 -> 1번 -> 2번 -> 0번
    // 유미 -> 1번 -> 0번 -> 2번
    // 유미 -> 2번 -> 0번 -> 1번
    // 유미 -> 2번 -> 1번 -> 0번
    double ans = 1e18;    // double의 최댓값으로 초기화
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == j) continue;
            for(int k = 0; k < 3; k++){
                if(k == i || k == j) continue;

                double sum = 0;
                sum += dist(yumi_x, yumi_y, p[i].first, p[i].second);
                sum += dist(p[i].first, p[i].second, p[j].first, p[j].second);
                sum += dist(p[j].first, p[j].second, p[k].first, p[k].second);

                ans = min(ans, sum);
            }
        }
    }
    cout << (int)ans << '\n';

    return 0;
}