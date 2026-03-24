#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// double형 내림 연산 -> int로 캐스팅
// int값들의 나눗셈 -> 정수부만 남김 (내림 연산)
int main(){
    fastio;

    int n1, n2, n12;
    cin >> n1 >> n2 >> n12;

    cout << (n1+1)*(n2+1)/(n12+1) - 1 << '\n';

    return 0;
}