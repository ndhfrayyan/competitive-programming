#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll N, M, C, K, a, b, g;

ll dvu(ll x, ll y){
    ll z = x / y;
    if(z * y < x) return z + 1;
    return z;
}

int main(){
    cin >> N >> M >> C >> K;
    if(C < K){
        cout << "no" << endl;
    }
    else{
        if((K - 1) * M >= N){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
            N -= (K - 1) * M;
            a = min(dvu(N, C - K + 1), M);
            b = M;
            g = __gcd(a, b);
            cout << a / g << "/" << b / g << endl;
        }
    }
}
