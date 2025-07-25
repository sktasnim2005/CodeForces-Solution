#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {
    ll n,j,k;
    cin >> n >> j >> k;

    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }

    ll maxStrength = *max_element(a.begin(), a.end());


    cout << ( k>1 || a[j-1] == maxStrength ? "YES" : "NO") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
