#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii n;
    ss x, y;
    
    cin >> n >> x >> y;


    if(y == "week"){
        if(n == 5 || n == 6) cout << 53 << endl;
        else cout << 52 << endl;
    }
    else{
        if(n == 31) cout << 7 << endl;
        else if(n == 30) cout << 11 << endl;
        else cout << 12 << endl;
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
