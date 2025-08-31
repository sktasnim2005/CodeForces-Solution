#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ll n,m;
    cin >> n >> m;

    
    if(m==0) cout << 1 << endl;
    else if(n==m) cout << 0 << endl;
    else cout << min(n-m,m) << endl;
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
