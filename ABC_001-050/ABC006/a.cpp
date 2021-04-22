#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    if(N == 3 || N % 3 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
   
    return 0;
}