#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll k;
        cin >> k;
        vector<char> s;
        for(int j = 0; j < 3; j++){
            for(int i = 26; i >= 1; i--){
                if(k >= i + 1 * (2 - j)){
                    k -= i;
                    char c = 'a' + (i - 1);
                    s.pb(c);
                    break;
                }
            }
        }
        for(int i = 2; i >= 0; i--){
            cout << s[i];
        }
        cout << endl;
    }
}
