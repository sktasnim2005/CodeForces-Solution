#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii a,b,c;
    cin >> a >> b >> c;

    ii x= min({a,b,c});

    if (a%x != 0 || b%x != 0 || c%x != 0) {
            cout << "NO" << endl;
            return;    
    }

    ii cut = (a/x -1) +(b/x -1) +(c/x -1); 

    cout << (cut >3 ? "NO": "YES") << endl;
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
