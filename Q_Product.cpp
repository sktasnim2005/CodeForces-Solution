#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ll Product(ll x, ll y, ll mod){
    ll p =1;
    for(ll i =x;i<=y;i++){
        p = (p*i) %mod;
    }
    return p;
}

void solve() {
    ll l,r,m;
    cin >> l >> r >> m;

    cout << Product(l,r,m) << endl;


      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}