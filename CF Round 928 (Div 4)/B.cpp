#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;

ll n;
char a[15][15];

void solve(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    bool tr = false;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i - 1 >= 1 && j - 1 >= 1 && a[i][j] == '1' && a[i][j - 1] == '1' && a[i - 1][j - 1] == '1' && a[i - 1][j] == '0') tr = true;
            if(i + 1 <= n && j + 1 <= n && a[i][j] == '1' && a[i + 1][j] == '1' && a[i][j + 1] == '1' && a[i + 1][j + 1] == '0') tr = true;
        }
    }
    if(tr) cout << "TRIANGLE" << endl;
    else cout << "SQUARE" << endl;
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
}
