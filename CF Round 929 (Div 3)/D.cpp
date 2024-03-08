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
    ll a[n + 5];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    if(a[1] != a[2]){
        cout << "YES" << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(a[i] % a[1] != 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
