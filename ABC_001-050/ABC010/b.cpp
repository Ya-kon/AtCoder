#include <iostream>
#include <vector>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int n;
    cin >> n;

    int ans = 0;

    vector<int> a(n);

    rep(i, n) cin >> a[i];

    for(int i = 0; i < n; ++i) {
        if(a[i] % 2 == 0){
            ++ans;
             if( (a[i] - 1) % 3 == 2){
                ++ans;
                if( (a[i] - 2) % 2 == 0 || (a[i] - 2) % 3 == 2){
                    ++ans;
                }
            }
        }
        else if(a[i] % 3 == 2){
            ++ans;
            if( (a[i] - 1) % 2 == 0){
                ++ans;
                if( (a[i] - 2) % 2 == 0 || (a[i] - 2) % 3 == 2){
                    ++ans;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}