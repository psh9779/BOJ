#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int R,C;
    cin >> R >> C;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}