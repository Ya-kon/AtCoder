#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int n;
    cin >> n;

    int a[1000000];

    a[0] = a[1] = 0;
    a[2] = 1;
    for(int i = 3; i < n; ++i){
        a[i] = (a[i - 3] + a[i - 2] + a[i - 1]) % 10007;
    }

    cout << a[n - 1] << endl;
    
    return 0;
}