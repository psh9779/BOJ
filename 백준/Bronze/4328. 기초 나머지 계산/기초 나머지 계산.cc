#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 입력 : b p m
// 음이 아닌 b진법 정수 p와 m이 주어졌을 때, p를 m으로 나눈 나머지 구하기
int main(){
    fastio;
    
    int b;
    string p, m;
    while(1){
        cin >> b;    // 2이상 10이하
        if(b == 0) break;
        cin >> p >> m;
        
        int m_10 = 0;
        for(char c : m){
            int digit = c - '0';
            m_10 = m_10 * b + digit;
        }

        int rem = 0;    // 나머지
        for(char c : p){
            int digit = c - '0';
            rem = (rem * b + digit) % m_10;
        }

        string res;
        while(rem >= b){
            res = to_string(rem % b) + res;
            rem /= b;
        }
        res = to_string(rem) + res;

        cout << res << '\n';
    }

    return 0;
}