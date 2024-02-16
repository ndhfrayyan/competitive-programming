#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a, mx = -1e18, mn = 1e18;
        for(int i = 1; i <= n; i++) {
            cin >> a;
            mx = max(a, mx);
            mn = min(a, mn);
        }
        cout << mx - mn << endl;
    }
}
