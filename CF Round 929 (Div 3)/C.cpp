#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pll pair<ll, ll>
using namespace std;

ll pwr(ll x, ll y){
    ll ret = 1;
    while(y){
        if(y & 1) ret *= x;
        y >>= 1;
        x *= x;
    }
    return ret;
}


void solve(){
    ll a, b, k;
    cin >> a >> b >> k;
    ll sub = k, ca = 1, cb = 1, ans = 0;
    map<ll, ll> mp;
    while(sub % a == 0) sub /= a, ca++;
    sub = k;
    while(sub % b == 0) sub /= b, cb++;
    for(int i = 0; i <= ca; i++){
        for(int j = 0; j <= cb; j++){
            ll num = pwr(a, i) * pwr(b, j);
            if(k % num == 0) mp[num] = 1;
        }
    }
    for(int i = 1; i * i <= k; i++){
        if(k % i == 0){
            if(mp.count(i)) ans++;
            if(i * i != k && mp.count(k / i)) ans++;
        }
    }
    cout << ans << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
