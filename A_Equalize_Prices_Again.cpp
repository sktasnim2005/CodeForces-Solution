#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ii>a(n);

    for(ii &x :a) cin >> x;

    ll sum = accumulate(a.begin(),a.end(),0);
   
    
    cout << (sum+n-1)/n << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}