#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

int main(){
    fastio;

    const int Y = 360, M = 30;
    int Y0, M0, D0, Y1, M1, D1;
    double T0, P0, T1, P1;

    cin >> Y0 >> M0 >> D0 >> T0 >> P0;
    cin >> Y1 >> M1 >> D1 >> T1 >> P1;

    // 월과 일은 1부터 시작함에 주의 (0은 될 수 없다)
    int res0 = Y0*Y + (M0-1)*M + (D0-1);
    int res1 = Y1*Y + (M1-1)*M + (D1-1);

    res0 += (res0 - res1);

    Y0 = res0 / Y;
    res0 %= Y;
    M0 = res0 / M + 1;
    res0 %= M;
    D0 = res0 + 1;

    T0 += T0 - T1;
    P0 += P0 - P1;

    cout << Y0 << ' ' << M0 << ' ' << D0 << ' ';
    cout << fixed << setprecision(3);
    cout << T0 << ' ' << P0 << '\n';

    return 0;
}