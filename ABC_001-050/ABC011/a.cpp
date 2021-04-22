#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    if(N == 12) cout << "1" << endl;
    else cout << N + 1 << endl;
    
    return 0;
}