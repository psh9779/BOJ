#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// K값이 정해지므로 만족하는 수열은 테스트케이스마다 정확히 한개이거나, 없을 수 있음
// N개의 정수를 한번씩만 사용하여 다음 조건을 만족하는 수열을 만드려면
// P_i = i+1을 만족하는 경우만 겹치지 않게 수열 생성 가능

int main(){
    fastio;
    int T;
    cin >> T;

    while(T--){
        int N,K;
        cin >> N >> K;

        if(N == 1){
            cout << K << '\n';
            continue;
        }
        else if(K != 2){
            cout << "-1\n";
            continue;
        }
        
        for(int i = 1; i <= N; i++){
            if(i == 1){
                cout << i%N + 1;
                continue;
            }
            cout << ' ' << i%N + 1;
        }
        cout << '\n';
    }

    return 0;
}