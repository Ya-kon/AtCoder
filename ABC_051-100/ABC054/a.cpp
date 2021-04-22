#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    int A, B;
    cin >> A >> B;

    if(A == B) cout << "Draw" << endl;
    else if (A == 1) cout << "Alice" << endl;
    else if (B == 1) cout << "Bob" << endl;
    else if (A < B) cout << "Bob" << endl;
    else if (A > B) cout << "Alice" << endl;
    return 0;
}