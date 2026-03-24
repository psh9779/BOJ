#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int n;
    cin >> n;

    cout << fixed << setprecision(1);
    while(n--){
        double n1, n2;
        cin >> n1 >> n2;
        cout << abs(n1-n2) << '\n';
    }

    return 0;
}