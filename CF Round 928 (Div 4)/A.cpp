#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

void solve(){
    int cnt[2] = {0, 0};
    string s;
    cin >> s;
    for(int i = 0; i < 5; i++) cnt[s[i] - 'A']++;
    if(cnt[1] > cnt[0]) cout << "B" << endl;
    else cout << "A" << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
