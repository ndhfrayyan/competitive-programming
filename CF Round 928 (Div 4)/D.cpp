#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n, x, a;
    x = (1LL << 31) - 1;
    cin >> n;
    map<ll, ll> mp;
    for(int i = 1; i <= n; i++){
        cin >> a;
        if(mp.count(a)) mp[a]++;
        else mp[a] = 1;
    }
    ll ans = 0;
    for(auto z: mp){
        while(mp[z.fi] > 0){
            if(mp.count(z.fi ^ x) && mp[z.fi ^ x] > 0) mp[z.fi ^ x]--;
            mp[z.fi]--;
            ans++;
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
