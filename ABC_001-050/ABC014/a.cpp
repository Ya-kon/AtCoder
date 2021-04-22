#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int a, b;
    cin >> a >> b;

    int ans = a % b;

    if(ans == 0) cout << ans << endl;
    else cout << b - ans << endl;

    return 0;
}