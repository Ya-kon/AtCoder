#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int S, T;
    cin >> S >> T;

    int ans = 0;

    for(int i = S; i <= T; ++i){
        ans++;
    }

    cout << ans << endl;

    return 0;
}