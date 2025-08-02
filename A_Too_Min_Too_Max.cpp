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

    sort(a.begin(),a.end());
   
    cout << 2*(a[n-1]+a[n-2]) -  2*(a[0]+a[1]) << endl;


    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}