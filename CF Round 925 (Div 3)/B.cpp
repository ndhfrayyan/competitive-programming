#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, x = 0, y = 0;
        cin >> n;
        vector<ll> a(n);
        bool np = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            x += a[i];
        }
        x /= n;
        for(int i = n - 1; i >= 0; i--){
            if(a[i] <= x){
                y += x - a[i];
            }
            else if(a[i] > x){
                if(y >= a[i] - x){
                    y -= (a[i] - x);
                }
                else{
                    np = true;
                }
            }
        }
        if(np){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}
