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

    ll x = (n+1)/2; 

    cout << x << endl;
    
    for(ll i=2;i<=3*n;i+=6){
        cout << i << " " << 3*n << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
