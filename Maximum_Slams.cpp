#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {    
    ll x;
    cin >> x;

    if(x>=25){
        cout << 0 << endl; 
    }
    else{
        ll y = ceil((25-x)/4.0);
        cout << y << endl;
    }

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
