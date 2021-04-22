#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    int ans = 0;

    if(N % 2 == 0) ans = N / 2;
    else if(N % 2 == 1) ans = N / 2 + 1;

    cout << ans << endl;

    return 0;
}