#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 1 <= N , M <= 50
// 이중 for문 돌려서 모든 배열 요소를 기준으로 세방향 탐색
// 우측, 좌하단, 우하단만 체크하면 됨

// i가 짝수일 때, -> [i][j]를 기준으로 [i][j+1](우측), [i+1][j-1](좌하단), [i+1][j](우하단)
// i가 홀수일 때, -> [i][j]를 기준으로 [i][j+1](우측), [i+1][j](좌하단), [i+1][j+1](우하단)

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
            if(j <= M-2 && v[i][j] != v[i][j+1])
                cnt++;
            if(i <= N-2 && v[i][j] != v[i+1][j])
                cnt++;
            int nj = (i%2 ? j+1 : j-1);
            if(i <= N-2 && 0 <= nj && nj <= M-1 && v[i][j] != v[i+1][nj])
                cnt++; 
        }
    }
    cout << cnt << '\n';

    return 0;
}