#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() { 
    ll n,k;  
    cin >> n >> k;

    vector<ll>a(n);

    ll miN = LLONG_MAX;

    for(ll i=0;i<n;i++){
        cin >> a[i];
        miN = min(miN,a[i]);
    }

    ll extra = 0;

    for(ll i=0;i<n;i++){
        extra += a[i]-miN;
    }

    cout << (extra %2 == 1  ? "Jerry" : "Tom") << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
