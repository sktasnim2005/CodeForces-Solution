#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int

void solve() {
    ll n, d;
    cin >> n >> d;

    if(d<=n){
        cout<<"YES\n";
        return;
    }

    bool ans = false;
    
    for (ll x = 0; x <= n; ++x) {
        int runtime = (int)ceil((double)d / (x + 1));
        if (x + runtime <= n) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ii t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
