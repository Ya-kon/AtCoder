#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    
    int N;
    cin >> N;

    int Amax = -10000000;
    int Bmin = 10000000;
    int ans = 0;

    rep(i, N){
        int A;
        cin >> A;
        Amax = max(A, Amax);
    }

     rep(i, N){
        int B;
        cin >> B;
        Bmin = min(B, Bmin);
     }

    for(int i = Amax; i <= Bmin; ++i){
        ans += 1;
    }

    cout << ans << endl;

    return 0;
}