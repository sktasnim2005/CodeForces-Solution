#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii a,b;
    cin >> a >> b;


    cout << ((a+b>=1) && (abs(a-b)<=1) ? "YES" : "NO" ) << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}