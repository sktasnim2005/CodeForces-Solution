#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll x,n;
    cin >> x >> n;

    ll ans = x;
    ll y = n%4;

    if (x % 2 == 0) {
        if (y == 1) ans -= n;
        else if (y == 2) ans += 1;
        else if (y == 3) ans += n + 1;
    }
    else {
        if (y == 1) ans += n;
        else if (y == 2) ans -= 1;
        else if (y == 3) ans -= n + 1;
    }

    cout << ans << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
