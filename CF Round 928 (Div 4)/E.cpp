#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n, k;
    cin >> n >> k;
    ll nw, cn = 1;
    while(k){
        nw = (n / cn + 1) / 2;
        if(k - nw > 0){
            k -= nw;
        }
        else{
            cout << (2 * (k - 1) + 1) * cn << endl;
            break;
        }
        cn *= 2;
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
