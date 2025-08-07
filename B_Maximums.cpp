#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n;
    cin >> n;

    vector<ll> a(n);

    for(ll i=0;i<n;i++){
        cin >> a[i];
    }

    ll maxVal =0;

    for(ll i=0;i<n;i++){
        ll x = maxVal+a[i];
        cout<< x << " ";
        maxVal = max(maxVal,x);
    }


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
