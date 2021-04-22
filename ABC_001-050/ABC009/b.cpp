#include <iostream>
#include <vector>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<int> A(N);

    rep(i,N) cin >> A[i];

    sort(A.begin(), A.end(), greater<int>());

    rep(i, N){
        if(A[0] != A[i]){
            cout << A[i] << endl;
            return 0;
        }
    }

    return 0;
}