#include <iostream>
#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    string A, B;
    cin >> A >> B;

    if(A.length() > B.length()) cout << A << endl;
    else cout << B << endl;

    return 0;
}