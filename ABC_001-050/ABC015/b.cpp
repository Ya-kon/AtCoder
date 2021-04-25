#include <iostream>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {

    float N;
    cin  >> N;

    float sum;

    int count;

    rep(i, N){
        float A;
        cin >> A;

        if(A == 0) count++;

        sum += A;
    }

    N = N - count;

    if(sum % N ==  0) cout << sum / N <<  endl;


    return 0;
}

楽天銀行デビットカードが一時的に利用制限をかけていいる
とのメールがあったので
その確認をさせていただきたいのですが　