#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll pre[n + 5];
        pre[0] = 0;
        for(int i = 1; i <= n; i++){
            ll a;
            cin >> a;
            pre[i] = pre[i - 1] + a;
        }
        ll q;
        cin >> q;
        for(int i = 1; i <= q; i++){
            ll f, u;
            cin >> f >> u;
            ll num = n, l, r, m;
            l = f;
            r = n;
            while(l <= r){
                m = (l + r) / 2;
                if(pre[m] - pre[f - 1] >= u + 1){
                    num = m;
                    r = m - 1;
                }
                else{
                    l = m + 1;
                }
            }
            ll ans1 = (pre[num] - pre[f - 1]) * (2 * u + 1 - (pre[num] - pre[f - 1])) / 2;
            ll ans2 = (pre[num - 1] - pre[f - 1]) * (2 * u + 1 - (pre[num - 1] - pre[f - 1])) / 2;
            if(ans2 >= ans1 && num - 1 > f - 1) cout << num - 1;
            else cout << num;
            if(i != q) cout << " ";
        }
        cout << endl;
    }
}
