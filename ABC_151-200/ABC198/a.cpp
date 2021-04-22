/*
*  AC
*/
#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;
    int ans = 0;
 
    rep(A, N) {
        rep(B, N) {
            int AB = A + B;
            if (AB == N) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}