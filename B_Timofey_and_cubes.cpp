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

    vector<ll> a(n);

    for(auto& x : a) cin >> x;    

    for(ll i=0;i<n/2;i+=2){
        swap(a[i],a[n-i-1]);
    }


    for(auto& x : a){
        cout << x << " ";
    }
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
