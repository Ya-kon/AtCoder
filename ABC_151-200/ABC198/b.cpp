/*
*  AC
*/
#include <iostream>
#include <string>
#include <algorithm>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
 
int main() {
    string N;
    cin >> N;
    string ReverseN(N);
    bool ans = false;
    reverse(ReverseN.begin(), ReverseN.end());
 
    if (N == ReverseN) {
        ans = true;
        cout << "Yes" << endl;
    }
    else {
        int Num = count(std::begin(N), std::end(N), '0');
        string N2(N);
        reverse(N2.begin(), N2.end());
 
        for (int i = 0; i <= Num; ++i) {
            N.insert(0, "0");
            N2.insert(N2.size(), "0");
            if (N == N2) {
                cout << "Yes" << endl;
                ans = true;
                break;
            }
        }
    }
 
    if (!ans) cout << "No" << endl;
    return 0;
}