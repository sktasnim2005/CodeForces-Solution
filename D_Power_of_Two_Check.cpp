#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {

    dd n;
    cin >> n ;

    dd x = log2(n);


    ii y = dd(x);

    cout << (x==y ?"YES" : "NO") << endl;
   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
