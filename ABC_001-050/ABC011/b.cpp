#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    string S;
    cin >> S;

    string ans;

    rep(i, S.length()){
        if(i == 0){
            ans[0] = toupper(S[0]);
            cout << ans[0];
        }
        else {
            ans[i] = tolower(S[i]);
            cout << ans[i];
        }
    }

    cout << endl;

    return 0;
}