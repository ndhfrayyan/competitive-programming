#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define fi first
#define se second
#define pb push_back
using namespace std;

ll gcd(ll a, ll b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n + 5], ans = 0;
        for(ll i = 1; i <= n; i++){
            cin >> a[i];
        }
        vector<ll> fac;
        for(ll i = 1; i * i <= n; i++){
            if(n % i == 0){
                fac.pb(i);
                if(n / i != i) fac.pb(n / i);
            }
        }
        for(auto f: fac){
            ll g[f + 5];
            for(ll i = 0; i < f; i++) g[i] = 0;
            for(ll i = f + 1; i <= n; i++){
                g[i % f] = gcd(abs(a[i] - a[i - f]), g[i % f]);
            }
            bool np = false;
            ll gd = 0;
            for(ll i = 0; i < f; i++){
                gd = gcd(g[i], gd);
            }
            if(gd == 1) np = true;
            if(!np) ans++;
        }
        cout << ans << endl;
        fac.clear();
    }
}