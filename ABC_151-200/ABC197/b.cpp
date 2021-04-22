#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int H, W, X, Y;
    cin >> H >>W >> X >> Y;

    int a = H * W;

    vector<string> S(a);

    rep(i,a) cin >> S[i];

    int ans = 0;

    if(S[X-1][Y] == '.'){
        ans++;
    }
    if(S[X][Y-1] == '.'){
        ans++;
    }
    if(S[X][Y] == '.'){
        ans++;
    }
    if(S[X][Y+1] == '.'){
        ans++;
    }
    if(S[X+1][Y] == '.'){
        ans++;
    }

    cout << ans << endl;

    return 0;
}