#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    int o, m, s;

    o = N / 3600;
    if(o <= 9) cout << "0" << o << ":";
    else cout << o << ":";

    m = (N % 3600) / 60;
    if(m <= 9) cout << "0" << m << ":";
    else cout << m << ":";

    s = N % 60;
    if(s <= 9) cout << "0" << s << endl;
    else cout << s << endl;

    return 0;
}