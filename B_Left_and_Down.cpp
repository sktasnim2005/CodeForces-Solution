#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ll Gcd(ll a, ll b){
    return __gcd(a,b);
}

void solve() {
    
    ll a,b,k;
    cin >> a >> b >> k;

    ll x = Gcd(a,b);

    ll dx = a/x;
    ll dy = b/x;

    cout << (dx <= k && dy <= k ? 1 : 2) << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
