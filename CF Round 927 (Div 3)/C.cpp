#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n, m;
    cin >> n >> m;
    ll a[n + 5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    string s;
    cin >> s;
    ll l = 1, r = n;
    vector<ll> num, ans;
    for(int i = 0; i < n; i++){
        if(s[i] == 'L'){
            num.pb(l);
            l++;
        }
        else{
            num.pb(r);
            r--;
        }
    }
    ll ret = 1;
    for(int i = num.size() - 1; i >= 0; i--){
        ret *= a[num[i]];
        ret %= m;
        ans.pb(ret);
    }
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i];
        if(i != 0) cout << " ";
    }
    cout << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
