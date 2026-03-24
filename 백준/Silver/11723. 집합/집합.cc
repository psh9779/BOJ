#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int M;
    cin >> M;

    vector<bool> v(21, false);
    string op;
    int x;
    while(M--){
        cin >> op;
        
        if(op == "add"){
            cin >> x;
            v[x] = true;
        }
        else if(op == "remove"){
            cin >> x;
            v[x] = false;
        }
        else if(op == "check"){
            cin >> x;
            cout << (v[x] ? 1 : 0) << '\n';
        }
        else if(op == "toggle"){
            cin >> x;
            v[x] = !v[x];
        }
        else if(op == "all"){
            for(int i = 1; i <= 20; i++){
                v[i] = true;
            }
        }
        else if(op == "empty"){
            for(int i = 1; i <= 20; i++){
                v[i] = false;
            }
        }
    }

    return 0;
}