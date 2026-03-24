#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int N;
    cin >> N;
    
    string pw;
    while(N--){
        cin >> pw;
        if(pw.length() >= 6 && pw.length() <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}