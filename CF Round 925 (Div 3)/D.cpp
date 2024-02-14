#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, x, y;
        cin >> n >> x >> y;
        map<pll, ll> mp;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            pll p;
            p = {a[i] % x, a[i] % y};
            if(!mp.count(p)){
                mp[p] = 1;
            }
            else{
                mp[p]++;
            }
        }
        ll ans = 0;
        for(auto z : mp){
            if(mp.count({(x - z.fi.fi) % x, z.fi.se})){
                if((x - z.fi.fi) % x == z.fi.fi) ans += z.se * (mp[{(x - z.fi.fi) % x, z.fi.se}] - 1);
                else ans += z.se * mp[{(x - z.fi.fi) % x, z.fi.se}];
            }
        }
        cout << ans / 2 << endl;
    }
}
