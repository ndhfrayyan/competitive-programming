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
        ll n, x;
        cin >> n >> x;
        ll p[n + 5], pos;
        for(int i = 1; i <= n; i++) cin >> p[i];
        for(int i = 1; i <= n; i++){
            if(p[i] == x) pos = i;
        }
        ll l = 1, r = n + 1, m;
        vector<ll> num;
        while(r - l != 1){
            m = (l + r) / 2;
            if(p[m] <= x){
                l = m;
                num.pb(p[m]);
            }
            else{
                r = m;
                num.pb(p[m]);
            }
        }
        if(p[l] == x){
            cout << 0 << endl;
        }
        else{
            bool ok = false;
            for(auto z: num){
                if(z == x){
                    ok = true;
                }
            }
            if(!ok){
                cout << 1 << endl;
                cout << pos << " " << l << endl;
            }
            else{
                vector<pair<ll,ll>> ans;
                ans.pb({pos, l});
                swap(p[pos], p[l]);
                pos = l;
                l = 1, r = n + 1;
                while(r - l != 1){
                    m = (l + r) / 2;
                    if(p[m] <= x){
                        l = m;
                    }
                    else{
                        r = m;
                    }
                }
                if(p[l] ==  x){
                    cout << 1 << endl;
                    cout << ans[0].fi << ' ' << ans[0].se << endl;
                }
                else{
                    ans.pb({pos, l});
                    cout << 2 << endl;
                    cout << ans[0].fi << ' ' << ans[0].se << endl;
                    cout << ans[1].fi << ' ' << ans[1].se << endl;
                }
            }
        }
    }
}
