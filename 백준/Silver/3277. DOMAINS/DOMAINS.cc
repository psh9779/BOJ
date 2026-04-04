#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// http://라는 접두어로 시작할 수 있으며
// .으로 구분되는 단어들이 올 수 있다. (이 부분이 컴퓨터의 이름이다.)
// 그 이후로 /로 구분되는 여러 단어들이 올 수 있는데 이는 경로이다.
// 도메인 이름은 컴퓨터 이름의 가장 마지막 단어이다. (이 부분이 핵심)
string getDomain(string s){
    const string prefix = "http://";
    if(s.substr(0, prefix.size()) == prefix){
        s = s.substr(prefix.size());
    }

    size_t slash_pos = s.find('/');    // 컴퓨터 이름 뒤 경로 제거
    if(slash_pos != string::npos){
        s = s.substr(0, slash_pos);
    }

    size_t domain_pos = s.rfind('.');
    if(domain_pos != string::npos){
        s = s.substr(domain_pos+1);
    }
    
    return s;
}

int main(){
    fastio;

    int N;
    cin >> N;

    map<string, int> mp;
    while(N--){
        string addr;
        cin >> addr;
        
        string domain = getDomain(addr);
        mp[domain]++;
    }

    int max_v = 0;
    for(auto &p : mp){
        max_v = max(max_v, p.second);
    }

    cout << max_v << '\n';

    for(auto &p : mp){
        if(p.second == max_v){
            cout << p.first << ' ';
        }
    }

    return 0;
}