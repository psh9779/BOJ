#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

// 1. http://라는 접두어로 시작 가능 (없을 수 있음)
// 2. 이후 computer name이 나타나는데, 두개 이상의 이름은 .으로 구분됨
// 3. computer name이후 경로가 /를 구분자로하여 나타날 수 있음
// 4. domain name은 computer name의 마지막 단어임
string getDomain(string s){
    const string prefix = "http://";
    if(prefix == s.substr(0, prefix.size())){
        s = s.substr(prefix.size());
    }

    auto slashpos = s.find('/');
    if(slashpos != string::npos){
        s = s.substr(0, slashpos);
    }

    auto lastdot = s.rfind('.');
    if(lastdot != string::npos){
        s = s.substr(lastdot + 1);
    }

    return s;
}

int main(){
    fastio;

    int N;
    cin >> N;
    
    unordered_map<string, int> mp;
    while(N--){
        string addr;
        cin >> addr;

        string domain = getDomain(addr);
        mp[domain]++;
    }

    int maxn = 0;
    for(auto &p : mp){
        maxn = max(maxn, p.second);
    }

    cout << maxn << '\n';
    bool isfirst = true;
    for(auto &p : mp){
        if(p.second == maxn){
            if(isfirst){
                cout << p.first;
                isfirst = false;
                continue;
            }
            cout << ' ' << p.first;
        }
    }
    cout << '\n';
    return 0;
}