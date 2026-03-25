#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    string A;
    cin >> A;
    cin.ignore();    // 개행문자 제거

    string input_str;
    getline(cin, input_str);
    
    string B;
    for(char x : input_str){
        if(x == ' ')
            continue;
        B += x;    // string + char = string
    }

    // 최대 260만회의 연산
    int A_len = A.length();
    int B_len = B.length();
    string res;
    for(int i = 0; i < A_len; i++){
        bool isExist = false;
        for(int j = 0; j < B_len; j++){
            if(A[i] == B[j]){
                res += char(A[i]-'A'+'a');
                isExist = true;
                break;
            }
        }
        if(!isExist){
            res += A[i];
        }
    }
    cout << res << '\n';

    return 0;
}