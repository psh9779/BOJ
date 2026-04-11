#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
#define ll long long

int main(){
    fastio;

    int N, M;
    cin >> N >> M;

    vector<ll> a(N+1);
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    vector<vector<ll>> dp(M+1, vector<ll>(N+1, -1));
    dp[0][0] = 1;

    for(int i = 1; i <= M; i++){
        for(int j = i; j <= i*2 && j <= N; j++){
            if(i == j){
                dp[i][j] = dp[i-1][j-1] + a[j];
            }
            else if(j == i*2){
                dp[i][j] = dp[i-1][j-2]/2 + a[j];
            }
            else{
                dp[i][j] = max(dp[i-1][j-2]/2+a[j], dp[i-1][j-1]+a[j]);
            }
        }
    }

    ll max_n = 1;
    for(int i = 1; i <= M; i++){
        for(int j = i; j <= i*2 && j <= N; j++){
            if(dp[i][j] != -1)
                max_n = max(max_n, dp[i][j]);
        }
    }

    cout << max_n << '\n';
    return 0;
}