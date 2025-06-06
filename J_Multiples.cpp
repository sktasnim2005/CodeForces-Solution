#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll x,y;
    cin >> x >> y;

    if((x % y )==0 || (y % x) == 0) cout<< "Multiples" << endl;
    else cout << "No Multiples" << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
