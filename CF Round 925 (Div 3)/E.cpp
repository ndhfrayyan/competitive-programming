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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll sum = 0;
        vector<ll> num;
        for(int i = 0; i < n; i++){
            ll ctz = 0, cdg = 0, sub = a[i];
            while(sub > 0 && sub % 10 == 0){
                ctz++;
                sub /= 10;
            }
            sub = a[i];
            while(sub > 0){
                cdg++;
                sub /= 10;
            }
            sum += cdg;
            num.pb(ctz);
        }
        sort(num.begin(), num.end(), greater<ll>());
        for(int i = 0; i < num.size(); i++){
            if(i % 2 == 0){
                sum -= num[i];
            }
        }
        if(sum < m + 1){
            cout << "Anna" << endl;
        }
        else{
            cout << "Sasha" << endl;
        }
    }
}
