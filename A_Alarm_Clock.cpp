#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if(b>=a){
        cout << b << endl;
        return;
    }

    if(d>=c){
        cout << -1 << endl;
        return;
    }

    ll remain = a - b;
    ll per_cycle = c - d;

    ll cycles = ceil((double)remain/per_cycle);


    cout << b + c*cycles  << endl;    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}