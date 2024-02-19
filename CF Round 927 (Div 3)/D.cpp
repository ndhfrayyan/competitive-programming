#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n;
    char c;
    cin >> n >> c;
    string s[2 * n + 5];
    char st[5] = {'C', 'D', 'H', 'S'};
    ll cnt[5];
    vector<ll> v[5];
    for(int i = 1; i <= 2 * n; i++){
        cin >> s[i];
        for(int j = 0; j <= 3; j++){
            if(s[i][1] == st[j]){
                int x = s[i][0] - '0';
                v[j].pb(x);
            }
        }
    }
    for(int i = 0; i <= 3; i++){
        sort(v[i].begin(), v[i].end());
    }
    ll ss = 0, fr, mk;
    vector<pair<ll, char>> ans_1;
    vector<ll> ans_2;
    for(int j = 0; j <= 3; j++){
        if(st[j] != c){
            if(v[j].size() % 2 != 0){
                ss++;
                ans_1.pb({v[j].back(), st[j]});
                v[j].pop_back();
            }
        }
        else{
            mk = j;
            fr = v[j].size();
        }
    } 
    fr -= ss;
    if(fr < 0 || fr % 2 != 0){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        for(int i = 0; i < ss; i++){
            ans_2.pb(v[mk].back());
            v[mk].pop_back();
        }
        for(int i = 0; i <= 3; i++){
            for(int j = 0; j < v[i].size(); j += 2){
                cout << v[i][j] << st[i] << " " << v[i][j + 1] << st[i] << endl;
            }
        }
        for(int i = 0; i < ans_1.size(); i++){
            cout << ans_1[i].fi << ans_1[i].se << " " << ans_2[i] << c << endl;
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
