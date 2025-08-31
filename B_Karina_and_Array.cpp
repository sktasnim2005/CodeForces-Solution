#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;    
    cin >> n;

    vector<ll> a(n);

    for(auto& x : a) cin >> x;

    sort(a.begin(),a.end());

    ll ans1 = a[0]*a[1];
    ll ans2 = a[n-1]*a[n-2];
  

    cout << max(ans1,ans2) << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
