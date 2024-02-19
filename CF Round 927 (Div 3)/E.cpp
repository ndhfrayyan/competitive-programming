#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n;
    string s;
    cin >> n >> s;
    bool xx = true;
    string nw = "";
    for(int i = 0; i < n; i++){
        if(s[i] == '0' && xx) continue;
        xx = false;
        nw += s[i];
    }
    ll pre[n + 10], dig[n + 10];
    for(int i = 0; i < n + 8; i++) pre[i] = dig[i] = 0;
    for(int i = 0; i < nw.size(); i++){
        if(i != 0) pre[i] += pre[i - 1];
        pre[i] += (nw[i] - '0');
    }
    ll mx = 0;
    for(int i = 0; i < nw.size(); i++){
        ll j = i, sub = pre[nw.size() - 1 - i];
        while(sub){
            dig[j] += sub % 10;
            sub /= 10;
            mx = max(mx, j);
            j++;
        }
    }
    vector<ll> ans;
    for(int i = 0; i < mx + 5; i++){
        ans.pb(dig[i] % 10);
        dig[i + 1] += (dig[i] / 10);
    }
    xx = true;
    for(int i = ans.size() - 1; i >= 0; i--){
        if(ans[i] == 0 && xx) continue;
        xx = false;
        cout << ans[i];
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
