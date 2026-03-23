#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// LIS : 가장 긴 증가하는 부분 수열
// 실제 LIS의 크기를 M
// 정현이가 구한 LIS의 크기는 K
// 즉, 1 ~ K-1 / (가운데부분은 N부터 시작하는 내림차순) / K부터 M까지라고 수열을 구성하면 된다.
// 가운데 부분은 N-M개이면 되므로, N부터 M+1까지의 수이면 됨
int main(){
    fastio;

    int N,M,K;
    cin >> N >> M >> K;

    vector<int> res;
    if(N != M){
        for(int i = 1; i <= K-1; i++){
            res.push_back(i);
        }
        for(int j = N; j >= M+1; j--){
            res.push_back(j);
        }
        for(int k = K; k <= M; k++){
            res.push_back(k);
        }

        for(int i = 0; i < N; i++){
            if(i == 0){
                cout << res[i];
                continue;
            }
            cout << ' ' << res[i];
        }
        cout << '\n';
    }
    else{    // N == M이면 K < M일 수 없다. (오로지 증가하는 함수 하나만 존재하므로 K 또한 M과 같게 된다.)
        cout << -1;
    }

    return 0;
}