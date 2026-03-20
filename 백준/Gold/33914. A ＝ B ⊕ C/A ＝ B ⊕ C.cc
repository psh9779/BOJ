#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

const int DIV = 1000000007;
ll dp[2001][2001];

// A_3k-2, A_3k-1, A_3k-2의 구성은 다음 4가지 가능함
// 000, 011, 101, 110
// 따라서, 3개의 0이 사용되는 한가지 경우와, 한개의 0과 두개의 1이 사용되는 세가지 경우가 가능 
// 최악의 경우(3000, 3000 입력 시) 2000C500 계산이 필요 (500개 자리에 000 넣고 생각)
// 조합 계산은 nCr = n-1Cr + n-1Cr-1을 이용
int main()
{
    fastio;

    int X, Y;
    cin >> X >> Y;

    int n = (X+Y)/3, r0 = (Y-X/2)/3, r1 = X/2;

    // nCn = nC0 = 1
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % DIV;
        }
    }

    if(X % 2)
        cout << "0\n";
    else{
        ll result = dp[n][r0];
        for(int i = 0; i < r1; i++)
            result = (result * 3) % DIV;
        cout << result << '\n';
    }

    return 0;
}