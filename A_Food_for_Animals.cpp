#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll a,b,c,x,y;
    cin >> a >> b >> c >> x >> y;

    ll need_c =0;

    if(a < x) need_c += (x-a);
    if(b < y) need_c += (y-b);
    
    
    cout << (need_c <= c ? "YES":"NO") << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}