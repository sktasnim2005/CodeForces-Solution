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
    ii moves =0;

    for(ii i=0;i<n;i++){
        cin >> a[i];
        moves +=(a[i]-1);
    }

    cout << (moves%2 !=0 ? "errorgorn" : "maomao90") << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
