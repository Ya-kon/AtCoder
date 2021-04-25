#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
   
   int A, B, C;
   cin >> A >> B >> C;

   int ansA = A * A;
   int ansB = B * B;
   int ansC = C * C;

   int ans = ansA + ansB;

   if(ans < ansC) cout  << "Yes" <<  endl;
   else cout << "No" << endl;

    return 0;
}