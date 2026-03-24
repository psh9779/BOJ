#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int N, P;
    cin >> N >> P;

    int sales;
    if(N >= 20){
        sales = max(2000, (int)(P * 0.25));
        cout << (P > sales ? P - sales : 0) << '\n';
    }
    else if(N >= 15){
        sales = max(2000, (int)(P * 0.1));
        cout << (P > sales ? P - sales : 0) << '\n';
    }
    else if(N >= 10){
        sales = max(500, (int)(P * 0.1));
        cout << (P > sales ? P - sales : 0) << '\n';
    }
    else if(N >= 5)
        cout << (P > 500 ? P - 500 : 0);
    else
        cout << P;

    return 0;
}