#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll x,y,z;
    cin >> x >> y >> z;

    ll m = max({x,y,z});
    ll mi = min({x,y,z});

    cout << mi << " " << m << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
