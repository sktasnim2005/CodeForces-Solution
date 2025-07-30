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

    ii odd=0;
    for(auto &x : a){ 
        cin >> x;
        if( x%2 !=0) odd++;
    } 

   
    cout << (odd==1 && n-odd == n-1 ? "Yes" : "No" ) << endl;
   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}