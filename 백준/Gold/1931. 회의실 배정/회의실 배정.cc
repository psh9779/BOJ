#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 종료 시간순으로 정렬하는 것이 핵심 아이디어
// 종료 시간이 같으면 시작 시간순으로 정렬

bool compare(pair<int,int>& a, pair<int,int>& b){
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    fastio;

    int N;
    cin >> N;

    vector<pair<int,int>> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), compare);

    int cnt = 0, end;    // 끝난 회의의 종료 시간만 저장해두면 됨
    for(int i = 0; i < N; i++){
        if(i == 0){
            end = v[i].second;
            cnt++;
            continue;
        }

        if(v[i].first >= end){
            end = v[i].second;
            cnt++;
        }
    }
    cout << cnt << '\n';

    return 0;
}