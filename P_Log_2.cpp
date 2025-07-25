#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ll n;

ll SHOW(ll i){
    if(i==1){
        return 0;
    }
    return 1 + SHOW(i/2);
}

void solve() {    
    cin >> n;
 
    cout << SHOW(n) << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
