#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    ll x,y,a;  
    cin >> x >> y >> a;

    ll rem = a%(x+y);

   
    cout <<(rem< x ? "NO" : "YES" ) << endl;

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
