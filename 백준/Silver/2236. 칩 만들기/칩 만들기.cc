#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 하나에 연결될때는 제곱, 두개에 연결될때는 두 부품의 중요도 곱이 더해짐
// 제곱이 되도록 하는게 제일 최대일거 같은데..
int main(){
    fastio;

    int N, K;
    cin >> N >> K;

    vector<bool> visited(N+1, false);
    vector<pair<int,int>> arr(N+1);
    for(int i = 1; i <= N; i++){
        arr[i].first = i;
        cin >> arr[i].second;
    }

    // second값(중요도) 기준으로 내림차순 정렬
    sort(arr.begin()+1, arr.end(), [](const pair<int,int> &a, const pair<int,int> &b){
        return a.second > b.second;
    });
    
    // 상위 K개 선택 (하나만 연결되는게 최대 중요도가 됨)
    for(int i = 1; i <= K; i++){
        cout << arr[i].first << '\n';
        visited[arr[i].first] = true;    // 원래 번호 기준으로 연결여부 체크
    }

    for(int i = 1; i <= N; i++){
        if(visited[i]) cout << i << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}