#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 1 <= N , M <= 50
// 물을 기준으로 count, 또는 땅을 기준으로 count하자
// 모든 요소를 순차적으로 반복하며 체크할 때, 육각형이므로 [i][j]를 기준으로 우측, 좌하단, 우하단 3가지만 체크하면 된다.

int main(){
    fastio;
    
    int N, M;
    cin >> N >> M;
    vector<string> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(i % 2){
                if(i <= N-2 && v[i][j] != v[i+1][j])    // 좌하단
                    cnt++;
                if(j <= M-2 && v[i][j] != v[i][j+1])    // 우측
                    cnt++;    
                if(i <= N-2 && j <= M-2 && v[i][j] != v[i+1][j+1])    // 우하단
                    cnt++;
            }
            else{
                if(i <= N-2 && v[i][j] != v[i+1][j])    // 우하단
                    cnt++;
                if(j <= M-2 && v[i][j] != v[i][j+1])    // 우측
                    cnt++;
                if(i <= N-2 && j >= 1 && v[i][j] != v[i+1][j-1])    // 좌하단
                    cnt++;
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}