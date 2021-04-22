#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    float N;
    cin >> N;

    float ans = 0;

    for (float i = 0; i <= N; ++i){
        ans += (i * 10000.0f) * (1.0f / N);
    }

    cout << ans << endl;

    return 0;
}