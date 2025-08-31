#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n,k;
    cin >> n >> k;

    vector<ii> a(n);
    for(auto &x :a) cin >> x;

    ll h_low_bound = LLONG_MIN;
    ll l_high_bound = LLONG_MAX;    

    for(ii i=0;i<n;i++){
        h_low_bound = max(h_low_bound, a[i]-k);
        l_high_bound = min(l_high_bound, a[i]+k);
    }

    cout << (h_low_bound > l_high_bound ? -1 : l_high_bound) << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
