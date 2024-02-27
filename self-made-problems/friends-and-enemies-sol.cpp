#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define pii pair<int, int>
using namespace std;

int root(int x){
    if(par[x] != x) par[x] = root(par[x]);
    return x;
}

void merge(int x, int y){
    if(x < y) swap(x, y);
    if(root(x) != root(y)){
        par[root(y)] = root(x);
        sz[root(x)] += sz[root(y)];
    }
}

int main(){
    int n, q;
    cin >> n >> q;
    vector<pii> enemy;
    int t, u, v;
    for(int i = 1; i <= q; i++){
        cin >> t >> u >> v;
        u--;
        v--;
        if(t == 1){
            merge(u, v);
        }
        else{
            enemy.pb({u, v});
        }
    }
    vector<int> hate(n);
    for(int i = 0; i < int(enemy.size()); i++){
        if(root(enemy[i].fi) == root(enemy[i].se)){
            cout << -1 << endl;
            return 0;
        }
        hate[root(enemy[i].fi)].pb(root(enemy[i].se));
        hate[root(enemy[i].se)].pb(root(enemy[i].fi));
    }
    vector<bool> vis;
    vis.resize(n, false);
    vector<pii> ret;
    for(int i = 0; i < n; i++){
        if(i == root(i)){
            int sum[2];
            sum[0] = sum[1] = 0;
            if(!vis[i]){
                queue<pair<int, int>> q;
                q.push({i, 0});
                vis[i] = true;
                while(!q.empty()){
                    int f = q.front().fi, s = q.front().se;
                    sum[s] += sz[f];
                    q.pop();
                    for(int j = 0; j < int(hate[i].size()); i++){
                        if(!vis[hate[i][j]){
                            vis[hate[i][j]] = true;
                            q.push((hate[i][j], 1 - s));
                        }
                    }
                }
            }
            ret.pb({max(sum[0], sum[1]), min(sum[0], sum[1])});
        }
    }
    int x = 0, y = 0;
    for(int i = 0; i < int(ret.size()); i++){
        x += ret[i].fi;
        y += ret[i].se;
    }
    cout << x - y << endl;
}
