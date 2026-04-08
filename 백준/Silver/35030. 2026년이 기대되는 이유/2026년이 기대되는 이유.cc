#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

vector<bool> isPrime(100001, true);
vector<int> sum(100001, 0);    // 특별한 수 누적합 배열

void primecheck(void){
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= 100000; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= 100000; j += i){
                isPrime[j] = false;
            }
        }
    }
}

bool isSpecial(int n){
    if(!isPrime[n+1])
        return false;
    
    for(int div = 10; div <= n; div *= 10){
        int left = n/div;
        int right = n%div;

        if(!isPrime[left*right+1])
            return false;
    }

    return true;
}

int main(){
    fastio;

    primecheck();    // 에라토스테네스의 체

    int cnt;
    // 누적합
    for(int i = 1; i <= 100000; i++){
        if(isSpecial(i)) cnt = 1;
        else cnt = 0;

        sum[i] = sum[i-1] + cnt;
    }

    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        cout << sum[N] << '\n';
    }

    return 0;
}