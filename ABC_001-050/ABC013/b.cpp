#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int a, b;
    cin >> a >> b;

    int ans = abs(a - b);

    if(ans < 6) cout << ans << endl;
    else cout << 10 - ans << endl;

    return 0;
}