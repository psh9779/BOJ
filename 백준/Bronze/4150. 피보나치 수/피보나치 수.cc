#include <iostream>
#include <string>
#include <vector>
#include <algorithm>    // max(), reverse()
using namespace std;

vector<string> fibonacci;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    fibonacci.push_back("0");
    fibonacci.push_back("1");    // 즉, n = 1이면 fibonacci[1]의 값을 출력하면 됨
    
    for (int i = 2; i <= n; i++) {
        string f1 = fibonacci[i - 2];
        string f2 = fibonacci[i - 1];
        string result = "";

        int carry = 0;
        int size1 = f1.size();
        int size2 = f2.size();
        int max_size = max(size1, size2);

        for (int j = 0; j < max_size; j++) {
            // f1,f2의 가장 낮은자리수부터 덧셈하여 올라가는 방식
            int digit1 = (j < size1) ? f1[size1 - 1 - j] - '0' : 0;
            int digit2 = (j < size2) ? f2[size2 - 1 - j] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            result += char(sum % 10 + '0');    // 역순 저장 (가장 낮은자리수부터 붙이기)
        }

        // 가장 높은 자리의 계산에서 carry-out이 발생한 경우
        if (carry)
            result += char(carry + '0');
        
        reverse(result.begin(), result.end());
        fibonacci.push_back(result);
    }

    cout << fibonacci[n] << '\n';

    return 0;
}