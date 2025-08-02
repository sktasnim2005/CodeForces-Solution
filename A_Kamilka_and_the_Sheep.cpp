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

    
    //ii ans= 0;
    //for(ii i=0;i<n;i++){ 
    //    for(ii j=i+1;j<n;j++){
    //        ans = max(ans, __gcd(a[i],a[j]));
    //    }   
    //}

    sort(a.begin(),a.end());

    cout << a[n-1]-a[0] << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}