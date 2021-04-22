#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int X, Y;
    cin >> X >> Y;

    int ans = 0;

    ans = max(X, Y);
    cout << ans << endl;
    return 0;
}