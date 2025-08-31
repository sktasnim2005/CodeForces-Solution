#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;
    cin >> n ;

    vector<ll>a(n);
    ll total =0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        total += a[i];
    }

    sort(a.rbegin(),a.rend());

    ll m;
    cin >> m;
    for(ll i=0;i<m;i++){
        ll q;
        cin >> q;
        ll low = a[q-1];
        cout << total - low << endl;
    }       
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
