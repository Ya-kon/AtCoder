#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N, Q;
    cin >> N;

    int N2 = N * 2;

    string S;
    cin >> S;

    cin >> Q;

    vector<int> T(Q);
    vector<int> A(Q);
    vector<int> B(Q);

    rep(i, Q){
        cin >> T[i];
        cin >> A[i];
        cin >> B[i];
    }

    rep(i, Q){
        if(T[i] == 1){
            string tmp1 = S;
            string tmp2 = S;

            string Bf = tmp1.substr(A[i], 1);
            string Af = tmp2.substr(B[i], 1);

            S.erase(A[i]);
            S.insert(A[i], Af);
            S.erase(B[i]);
            S.insert(B[i], Bf);
        }
        else if(T[i] == 2){

        }
    }

    cout << S << endl;

    return 0;
}