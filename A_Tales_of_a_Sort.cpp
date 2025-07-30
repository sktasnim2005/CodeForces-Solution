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

    for(auto &x : a) cin >> x;

    ll ans =0;
    for(ii i=0;i+1<n;i++){
        if(a[i] > a[i+1]){
            ans = max(ans,a[i]);
        }
    }


   
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}