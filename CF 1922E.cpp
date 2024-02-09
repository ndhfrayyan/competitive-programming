#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll, ll>
#define fi first
#define se second
#define pb push_back
using namespace std;

const ll md = 1e9 + 7, mx = 1e6;
ll t, x;

int main(){
    cin >> t;
    while(t--){
        cin >> x;
        ll pre[205];
        vector<ll> ans;
        pre[0] = 1;
        for(int i = 1; i <= 62; i++){
            pre[i] = pre[i - 1] * 2;
            // cout << pre[i] << endl;
        }
        ll num;
        for(int i = 1; i <= 62; i++){
            if(x >= pre[i]) num = i;
        }
        for(int i = 1; i <= num; i++){
            ans.pb(i);
        }
        for(int i = num; i >= 1; i--){
            if(x & pre[i - 1]) ans.pb(i);
        }
        cout << ans.size() << endl;
        for(auto x: ans){
            cout << x << " ";
        }
        cout << endl;
    }
}