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
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        sum += abs(a[i]);
    }
    cout << sum << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
