#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n,k,x;    
    cin >> n >> k >> x;

    ll count = 0;

    if(min(n,x+1) <k){
        cout << -1 << endl;
        return;
    }

    ll sum = k*(k-1) /2;

    ll best_value = x;

    if(x==k){
        best_value = x-1;
    }
    

    ll ans = sum + (n - k) * best_value;

    cout << ans << endl;



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
