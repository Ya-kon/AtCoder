#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int n, x;
    cin >> n >> x;

    int ans = 0;
    int k = 1;

    rep(i, n){
        int a;
        cin >> a;

        if((x & k) >  0) ans += a;
        k *= 2;
    }

    cout << ans  << endl;
    
    return 0;
}