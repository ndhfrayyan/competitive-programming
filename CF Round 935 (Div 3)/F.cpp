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
        ll n;
        cin >> n;
        ll v[n + 5], p[n + 5];
        for(int i = 1; i <= n; i++) cin >> v[i];
        for(int i = 1; i <= n; i++) cin >> p[i];
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = (n + 1) / 2; i <= n; i++){
            pq.push(v[p[i]]);
        }
        if(n % 2 == 0) pq.pop(); 
        ll ans, cnt = (n + 1) / 2;
        ans = pq.top() * cnt;
        for(int k = (n + 1) / 2 - 1; k >= 1; k--){
            pq.push(v[p[k]]);
            pq.pop();
            pq.pop();
            if(ans <= pq.top() * k){
                cnt = k;
                ans = pq.top() * k;
            }
        }
        cout << ans << " " << cnt << endl;
    }
}
