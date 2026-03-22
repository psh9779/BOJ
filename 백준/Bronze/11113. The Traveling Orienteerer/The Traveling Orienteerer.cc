#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int n;
    cin >> n;

    vector<pair<double,double>> points(n);
    for(int i = 0; i < n; i++){
        cin >> points[i].first >> points[i].second;
    }

    int m;
    cin >> m;

    while(m--){
        int p;
        cin >> p;

        vector<int> route(p);    // 진행해야 할 p개의 point들의 순서를 저장
        for(int i = 0; i < p; i++){
            cin >> route[i];
        }
        
        double total = 0.0;
        // p개의 지점을 이동해야하면, 간선(경로)의 수는 p-1개
        for(int cnt = 0; cnt < p-1; cnt++){
            double x1 = points[route[cnt]].first;
            double y1 = points[route[cnt]].second;
            double x2 = points[route[cnt+1]].first;
            double y2 = points[route[cnt+1]].second;

            double dx = x2 - x1;
            double dy = y2 - y1;

            total += sqrt(dx*dx + dy*dy);    // sqrt()의 리턴값은 double형
        }
        cout << (int)round(total) << '\n';    // round()의 리턴값은 double형
    }
    return 0;
}