#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;
    cin >> n;

    
    cout << (n>0 && (n & (n-1))==0 ? "YES" : "NO") << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}