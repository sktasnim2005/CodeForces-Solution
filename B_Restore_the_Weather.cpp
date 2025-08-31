#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n,k;    
    cin >> n >> k;

    vector<ll> a(n), b(n);

    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(auto&x : b){
        cout << x << " ";
    }
    cout << endl;

    


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
