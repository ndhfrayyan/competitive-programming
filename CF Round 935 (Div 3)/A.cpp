#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int ans = a + b / 3;
        if(b % 3 + c < 3 && b % 3 != 0){
            cout << -1 << endl;
            continue;
        }
        ans += (c + b % 3) / 3;
        if((c + b % 3) % 3 != 0) ans++;
        cout << ans << endl;
    }
}
