#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll n,c;
    cin >> n >> c;

    vector<ll>a(n);

    for(auto &x : a) cin >> x;

    sort(a.rbegin(),a.rend());

    ii coin =0;

    for(ll i=0;i<n;i++){
        ll x=1;
        for(ll j=0;j<coin;j++){
            x*=2;
        }
        if(a[i]*x <= c){
            coin++;
        }
    }


    cout << n-coin  << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
