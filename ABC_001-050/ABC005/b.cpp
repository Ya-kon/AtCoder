#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);

    int ans = 1000000;

    rep(i, N){
        cin >> T[i];
    }

    rep(i, N){
        ans = min(ans, T[i]);
    }

    cout << ans << endl;

    return 0;
}