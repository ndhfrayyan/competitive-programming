#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll a[n + 5], b[n + 5], sum = 0;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++) cin >> b[i];
        for(int i = m + 1; i <= n; i++) sum += min(a[i], b[i]);
        ll dp[m + 5], ans = 1e18, cnt = 0;
        for(int i = m; i >= 1; i--){
            ans = min(ans, sum + a[i] + cnt);
            cnt += b[i];
        }
        cout << ans << endl;
    }
}
