#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    string S, T;
    cin >> S >> T;

    int length = S.length();

    for(int i = 0; i <= length; ++i){
        if(S[i] == T[i]){
            continue;
        }
        else if(S[i] == '@'){
            if(T[i] == 'a' || T[i] == 't' || T[i] == 'c' || T[i] == 'o' || T[i] == 'd' || T[i] == 'e' || T[i] == 'r'){
                continue;
            }
            else {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else if(T[i] == '@'){
             if(S[i] == 'a' || S[i] == 't' || S[i] == 'c' || S[i] == 'o' || S[i] == 'd' || S[i] == 'e' || S[i] == 'r'){
                continue;
            }
             else {
                cout << "You will lose" << endl;
                return 0;
            }
        }
        else{
            cout << "You will lose" << endl;
            return 0;
        }
    }

    cout << "You can win" << endl;

    return 0;
}