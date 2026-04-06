#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;


int main(){
    fastio;

    int T, N;
    cin >> T >> N;

    unordered_map<string, int> mp = {{"Mon",1},{"Tue",2},{"Wed",3},{"Thu",4},{"Fri",5}};
    int total = 0;
    while(N--){
        string start_D, end_D;
        int start_H, end_H;
        cin >> start_D >> start_H >> end_D >> end_H;
        total += 24*(mp[end_D] - mp[start_D]) + end_H - start_H;
    }

    int res = T - total;
    if(res > 48){
        cout << -1 << '\n';
    }
    else if(res <= 0){
        cout << 0 << '\n';
    }
    else{
        cout << res << '\n';
    }

    return 0;
}