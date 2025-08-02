#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ii> a(n);
    for(ii i=0;i<n;i++){ 
        cin >> a[i];
        a[i] = abs(a[i]);        
    }

    ii start = a[0];

    sort(a.begin(),a.end());

    cout << (a[n/2] >= start ? "YES" : "NO" )  << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}