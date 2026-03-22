#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

vector<string> v(64);

void input(int N){
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
}

void print_result(int x, int y, int size){
    int total = 0;
    for(int i = x; i < x + size; i++){
        for(int j = y; j < y + size; j++){
            total += (v[i][j] - '0');
        }
    }
    if(total == 0)
        cout << 0;
    else if(total == size*size)
        cout << 1;
    else if(total != size*size){
        cout << '(';
        int half = size/2;
        print_result(x, y, half);
        print_result(x, y + half, half);
        print_result(x + half, y, half);
        print_result(x + half, y + half, half);
        cout << ')';
    }

    return;
}

int main(){
    fastio;

    int N;
    cin >> N;

    input(N);
    
    print_result(0, 0, N);
    return 0;
}