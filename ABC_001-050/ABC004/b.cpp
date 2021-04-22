#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {

    string c[4][4];
    string ans[4][4];

    rep(i, 4){
        rep(j, 4){
            cin >> c[i][j];
        }
    }

    rep(i, 4){
        rep(j, 4){
            ans[i][j] = c[3-i][3-j];
        }
    }

    rep(i, 4){
        rep(j, 4){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}