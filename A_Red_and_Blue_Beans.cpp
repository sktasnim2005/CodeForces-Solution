#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll r,b,d;
    cin >> r >> b >> d;

   
    ll max_val = max(r,b);
    ll min_val = min(r,b);

    ll ratio = (max_val + min_val -1)/ min_val;

    
    cout << (ratio <= d +1 ? "YES" : "NO") << endl;
 

    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
