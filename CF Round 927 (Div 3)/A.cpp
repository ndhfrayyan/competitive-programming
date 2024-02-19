#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    ll n;
    string s;
    cin >> n >> s;
    ll cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '@') cnt++;
        if(i > 0 && s[i] == '*' && s[i - 1] == '*') break;
    }
    cout << cnt << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
