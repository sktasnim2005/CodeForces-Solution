#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n,k;
    cin >> n >> k ;

    vector<ii> a;
    
    for(ii i=1;i<=k;i++){ 
        a.push_back(i);
    }
    for(ii i=n;i>k;i--){ 
        a.push_back(i);
    }

    for(ii i=0;i<n;i++){ 
        cout << a[i] << " " ;   
    }
    cout << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}