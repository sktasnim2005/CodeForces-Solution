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

    vector<ll> a(n), ans;
    for(auto& x : a) cin >> x;

    for(ll i=0;i<n-1;i++){
        ll y = __gcd(a[i],a[i+1]);
        ans.push_back(y);
    }

    if(is_sorted(ans.begin(),ans.end())){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
