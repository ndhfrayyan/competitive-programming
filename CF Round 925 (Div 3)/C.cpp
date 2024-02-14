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
        ll n, ans = 0;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll l = 1, r = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[0]){
                l++;
            }
            else{
                break;
            }
        }
        for(int i = n - 2; i >= 0; i--){
            if(a[i] == a[n - 1]){
                r++;
            }
            else{
                break;
            }
        }
        if(a[0] == a[n - 1]) ans = max(ans, n - r - l);
        else ans = max(ans, n - max(r, l));
        cout << ans << endl;
    }
}
