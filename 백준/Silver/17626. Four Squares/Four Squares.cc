#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int n;
    cin >> n;

    vector<int> sqrt_num;
    for(int i = 1; i*i <= n; i++){
        sqrt_num.push_back(i*i);
    }

    vector<int> dp(n+1);
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        dp[i] = i;
        for(int x : sqrt_num){
            if(x > i)
                break;
            dp[i] = min(dp[i], dp[i-x] + 1);
        }
    }

    cout << dp[n] << '\n';
    return 0;
}