#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    string S;
    cin >> S;

    cout  << S.substr(1) << S.substr(0, 1) << endl;

    return 0;
}