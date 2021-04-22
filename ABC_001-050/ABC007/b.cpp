#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    string A;
    cin >> A;

    int len = A.size();

    if(A == "a"){
        cout << "-1" << endl;
        return 0;
    }
    else if(A.length() == 1){
        cout << "a" << endl;
    }
    else{
        A.erase(len - 1);
        cout << A << endl;
    }

    return 0;
}