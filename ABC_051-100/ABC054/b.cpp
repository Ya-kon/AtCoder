#include <iostream>
#include <vector>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

    int N, M;
    string board[60];
    string pattern[60];

bool match(int x, int y)
{
    int i,j;
    rep(i,M){
        rep(j,M){
            if(board[x+i][y+j] != pattern[i][j]){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cin >> N >> M;
    rep(i, N) cin >> board[i];
    rep(i, M) cin >> pattern[i];

    bool ans = false;

    for(int i = 0; i <= N-M;++i){
        for(int j = 0; j <= N-M;++j){
            if(match(i, j));
            ans = true;
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}