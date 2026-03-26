#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 계란 개수 <= P, 총 무게 <= Q 조건을 만족하면서 15분 안에 한번에 삶을 수 있는 계란의 최대 개수 구하기
// 물은 끓는데 15분 걸리며, 15분만 주어지고, 총 계란 수 n개에서 P개까지만 담을 수 있으며 무게는 <= Q를 만족해야 함
int main(){
    fastio;
    
    int T;
    cin >> T;

    for(int i = 1; i <= T; i++){
        int n,P,Q;
        cin >> n >> P >> Q;
        
        vector<int> v(n);
        for(int j = 0; j < n; j++)
            cin >> v[j];
        sort(v.begin(), v.end());

        int cnt = 0;
        while(cnt < n && cnt < P && v[cnt] <= Q){
            Q -= v[cnt++];
        }

        cout << "Case " << i << ": " << cnt << '\n';
    }

    return 0;
}