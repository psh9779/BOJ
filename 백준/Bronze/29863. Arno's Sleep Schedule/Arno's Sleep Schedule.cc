#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    int start, end;
    cin >> start >> end;
    if(start >= 20)
        cout << end + (24-start) << '\n';
    else
        cout << end - start << '\n';

    return 0;
}