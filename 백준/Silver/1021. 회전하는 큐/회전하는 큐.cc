#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// deque + 그리디 탐색
// 왼쪽으로 돌려서 찾나, 오른쪽으로 돌려서 찾나 큐의 형태는 결론적으로 동일하게 됨
// 따라서, 더 빨리 찾을 수 있는 방법을 선택 -> 최솟값

int main(){
    fastio;

    int N,M;
    cin >> N >> M;

    deque<int> dq;
    for(int i = 1; i <= N; i++){
        dq.push_back(i);
    }

    vector<int> targets(M);
    for(int i = 0; i < M; i++){
        cin >> targets[i];
    }

    int answer = 0;
    for(int i = 0; i < M; i++){
        int idx;

        for(int j = 0; j < dq.size(); j++){
            if(dq[j] == targets[i]){
                idx = j;
                break;
            }
        }

        // dq.size()/2번 인덱스의 위치에 있는 target은 방법2.를 이용하는게 더 빠름
        if(idx <= dq.size()/2){
            while(idx--){
                dq.push_back(dq.front());
                dq.pop_front();
                answer++;
            }
        }
        else{
            int cnt = dq.size() - idx;
            while(cnt--){
                dq.push_front(dq.back());
                dq.pop_back();
                answer++;
            }
        }
        dq.pop_front();    // target 뽑아내기
    }
    cout << answer << '\n';

    return 0;
}