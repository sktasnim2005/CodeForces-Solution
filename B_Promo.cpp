#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n,q;
    cin >> n >> q;

    vector<ll> price(n);

    for(auto &x : price) cin >> x;

    sort(price.rbegin(),price.rend());
    
    vector<ll> prefixSum(n+1,0);

    for(ll i=0;i<n;i++){
        prefixSum[i+1] = prefixSum[i] + price[i];
    }

    while (q--)
    {
        ll x,y;
        cin >> x >> y;
        ll ans = prefixSum[x] - prefixSum[x-y];
        cout << ans << endl;
    }

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
