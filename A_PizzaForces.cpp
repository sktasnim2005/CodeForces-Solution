#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll n;
    cin >> n;

    //ll x=15;

    //cout << max(x,((n+1)/2)*5) << endl;
    
    cout << max(15LL,((n+1)/2)*5) << endl; // both are same as 15 is int but we can't compare it with ll 
    
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}