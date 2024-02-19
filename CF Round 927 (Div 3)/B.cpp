#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll a[n + 5];
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 2; i <= n; i++){
        a[i] = (a[i - 1] / a[i] + 1) * a[i];
    }
    cout << a[n] << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
