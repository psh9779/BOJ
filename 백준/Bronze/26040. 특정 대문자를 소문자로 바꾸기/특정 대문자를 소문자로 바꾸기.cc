#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    string A, B_line;
    cin >> A;
    cin.ignore();    // 개행문자 제거
    getline(cin, B_line);
    
    vector<bool> check(26, false);
    for(char c : B_line){
        if(c != ' ') check[c-'A'] = true;
    }

    // C++ 문법 활용 : range-based for에서 참조(&)를 사용하면 원본 문자열의 요소를 직접 수정할 수 있다.
    for(char &c : A){
        if('A' <= c && c <= 'Z' && check[c-'A']){
            c = c - 'A' + 'a';
        }
    }
    cout << A << '\n';

    return 0;
}