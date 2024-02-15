#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

bool same(vector<ll> &real, vector<ll> &seen){
    ll pivot = seen[0], now = 0;
    for(int i = 1; i < seen.size(); i++){
        if(pivot == real[now]) now++;
        if(seen[i] == real[now]) now++;
        else return false;
    }
    return true;
}

void solve(){
    ll n, k, x;
    cin >> n >> k;
    vector<ll> a[k + 5];
    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> x;
            a[i].pb(x);
        }
    }
    if(k == 1){
        cout << "YES" << endl;
        return;
    }
    else{
        // construct the possible answer
        ll bef[2], cnt = 1;
        vector<ll> ans[2];
        bef[0] = bef[1] = 0;
        for(int i = 2; i < n; i++){
            if(a[0][0] == a[1][i]) bef[0] = a[1][i - 1];
            if(a[1][0] == a[0][i]) bef[1] = a[0][i - 1];
        }
        if(bef[1] == bef[0]){
            cnt = 2;
            if(bef[0] == 0){
                ans[0].pb(a[0][0]); ans[0].pb(a[1][0]);
                ans[1].pb(a[1][0]); ans[1].pb(a[0][0]);
            }
            for(int i = 1; i < n; i++){
                if(a[0][i] != a[1][0]){
                    ans[0].pb(a[0][i]);
                    ans[1].pb(a[0][i]);
                }
                if(a[0][i] == bef[0]){
                    ans[0].pb(a[0][0]); ans[0].pb(a[1][0]);
                    ans[1].pb(a[1][0]); ans[1].pb(a[0][0]);                    
                }
            }
        }
        else{
            if(bef[0] == 0) ans[0].pb(a[0][0]);
            for(int i = 1; i < n; i++){
                ans[0].pb(a[0][i]);
                if(a[0][i] == bef[0]) ans[0].pb(a[0][0]);
            }
        }
        bool ok[2];
        ok[0] = ok[1] = true;
        for(int i = 0; i < k; i++){
            if(cnt == 2){
                ok[0] &= same(ans[0], a[i]);
                ok[1] &= same(ans[1], a[i]);
            }
            else{
                ok[0] &= same(ans[0], a[i]);
            }
        }
        if(cnt == 2 && (ok[0] || ok[1])){
            cout << "YES" << endl;
        }
        else if(ok[0]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
