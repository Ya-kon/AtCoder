#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<string> S(N);
    rep(i, N){
        cin >> S[i];
    }

    int count, copy = 0;

    string ans;

    rep(i, N){
        count = 0;
        rep(j, N){
            if(S[i] == S[j]){
                count++;
            }
        }
        if(copy < count){
            ans = S[i];
            copy = count;
        }
    }

    cout << ans << endl;

    return 0;
}