#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

vector<int> nums;
int main()
{
    fastio;

    int N;
    cin >> N;

    int temp;
    for(int i = 0; i < N; i++){
        cin >> temp;
        nums.push_back(temp);
    }
    
    sort(nums.begin(), nums.end(), greater<int>());
    
    for(int j = 0; j < N; j++){
        cout << nums[j] << '\n';
    }

    return 0;
}