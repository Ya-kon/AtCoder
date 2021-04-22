#include <iostream>
#include <string>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
    float m;
    cin >> m;

    float km = m / 1000.0f;
    int ans;
    string s;

    if(km > 70) {
        ans = 89;
        cout << ans << endl;
        return 0;
    }
    else if(km >= 35 & km <= 70){
        km = km - 30;
        km = km / 5;
        ans = km + 80;
        cout << ans << endl;
        return 0;
    }
    else if(km >= 6 & km <= 30){
        ans = km + 50;
        cout << ans << endl;
        return 0;
    }
    else if(km >= 0.1f & km <= 5){
        ans = km * 10;
        if(ans <= 9){
            s = to_string(ans);
            s.insert(0, "0");
            cout << s << endl;
            return 0;
        }
        cout << ans << endl;
        return 0;
    }
    else{
        s = "00";
        cout << s << endl;
        return 0;
    }

    return 0;
}