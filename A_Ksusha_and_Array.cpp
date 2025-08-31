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

    ll g = a[0];

    for(ll i=1;i<n;i++){
        g = __gcd(g,a[i]);
    }

    if(find(a.begin(),a.end(),g) != a.end()){
        cout << g << endl;
    }
    else{
        cout << -1 << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
