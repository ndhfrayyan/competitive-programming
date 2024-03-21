#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

double ab(double x){
    if(x < 0) return -x;
    return x;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        string s;
        cin >> n >> s;
        ll pre[n + 5];
        pre[0] = 0;
        for(int i = 1; i <= n; i++){
            pre[i] = pre[i - 1] + (s[i - 1] == '1');
        }
        ll ans;
        double mn = 1e9;
        for(int i = n; i >= 0; i--){
            if(pre[n] - pre[i] >= (n - i + 1) / 2 && i - pre[i] + pre[0] >= (i + 1) / 2){
                if(mn >= ab((double)n/2 - (double)i)){
                    mn = ab((double)n/2 - (double)i);
                    ans = i;
                }
            }
        }
        cout << ans << endl;
    }
}
