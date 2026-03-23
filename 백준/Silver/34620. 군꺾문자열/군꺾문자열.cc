#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 만약 $\frac{a}{b}$를 표현하는 가장 짧은 군꺾문자열이 여러 개라면 그 중 사전순으로 가장 빠른 것을 출력한다.
// 위 조건이 왜있을까.. a>b이면 직전에 무조건 "군" 연산이 이루어져야 가장 짧고, a < b이면 직전에 무조건 "꺾" 연산이 이루어져야 가장 짧음

bool isPower_2(int x){
    while(x != 1){
        if(x % 2)
            return false;
        x /= 2;
    }
    return true;
}

int main(){
    fastio;

    int a, b;
    cin >> a >> b;

    string res;

    // 분모는 2의 거듭제곱이어야 한다. (2진수 변환 시 한자리만 1이어야 함)
    if(isPower_2(b)){
        while(a != b){
            if(a > b){
                a = a - b;
                res = "G" + res;
            }
            else{
                b = b / 2;
                res = "K" + res;
            }
        }
        res = "G" + res;    // a == b가 된 경우. 즉, 처음으로 x가 0에서 1이 된 상황
        cout << res << '\n';
    }
    else
        cout << -1 << '\n';

    return 0;
}