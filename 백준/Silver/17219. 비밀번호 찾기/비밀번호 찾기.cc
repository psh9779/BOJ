#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int N,M;
    cin >> N >> M;

    unordered_map<string,string> ump;
    for(int i = 0; i < N; i++){
        string add, pw;
        cin >> add >> pw;
        ump[add] = pw;
    }

    for(int j = 0; j < M; j++){
        string temp;
        cin >> temp;
        cout << ump[temp] << '\n';
    }

    return 0;
}