#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

bool isPrime(ll x) {
    if (x <= 1) return false; 
    for (ll j = 2; j <= sqrt(x); j++) {
        if (x % j == 0)
            return false;
    }
    return true;
}

void solve() {
    ll n;
    cin >> n;

    
    cout << (isPrime(n) ? "YES" : "NO") << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}