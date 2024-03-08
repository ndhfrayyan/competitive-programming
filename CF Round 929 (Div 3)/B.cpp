#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define pll pair<ll, ll>
using namespace std;

void solve(){
    ll n;
    cin >> n;
    ll a[n + 5], sum = 0;
    bool ada = false;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] % 3 == 1) ada = true;
        sum += a[i];
    }
    if(sum % 3 == 0) cout << 0 << endl;
    if(sum % 3 == 1 && ada) cout << 1 << endl;
    if(sum % 3 == 1 && !ada) cout << 2 << endl;
    if(sum % 3 == 2) cout << 1 << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
