/*
*  解けなかった問題
*/
#include <iostream>
#include <cmath>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main()
{
    double R, X, Y;
    cin >> R >> X >> Y;

    double dis = sqrt(X * X + Y * Y);
    int ans = ceil(dis / R);
    if(ans == 1 && dis != R) ans++;

    cout << ans << endl;

    return 0;
}