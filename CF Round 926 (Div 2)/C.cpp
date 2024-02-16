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
        ll k, x, a;
        cin >> k >> x >> a;
        ll b, sum = 1;
        a--;
        for(int i = 2; i <= x; i++){
            b = 1 + sum / (k - 1);
            if(b <= 0) b = 1;
            sum += b;
            a -= b;
        }
        if(sum + 1 <= a * (k - 1) && a > 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
