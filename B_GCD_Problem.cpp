#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;    
    cin >> n;

    ll c = 1;
    ll total = n - c;

    for (ll a = 1; a < total; ++a) {
        ll b = total - a;
        if (a != b && __gcd(a, b) == c && a != c && b != c) {
            cout << a << " " << b << " " << c << "\n";
            return;
        }
    }
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
