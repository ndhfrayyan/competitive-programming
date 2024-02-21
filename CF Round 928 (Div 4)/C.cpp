#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

ll ans[200005];

void pre(){
    ans[0] = 0;
    for(int i = 1; i <= 200000; i++){
        ans[i] = ans[i - 1];
        ll sub = i;
        while(sub){
            ans[i] += sub % 10;
            sub /= 10;
        }
    }
}

void solve(){
    ll n;
    cin >> n;
    cout << ans[n] << endl;
}

int main(){
    ll t;
    cin >> t;
    pre();
    while(t--){
        solve();
    }
}
