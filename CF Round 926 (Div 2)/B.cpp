#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(k == 4 * n - 2){
            cout << 2 * n << endl;
        }
        else{
            cout << (k + 1) / 2 << endl;
        }
    }
}
