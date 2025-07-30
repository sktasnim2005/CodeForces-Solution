#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ll a,b;
    cin >> a >>b;

    ll Min = min(a,b);

    ll f = 1;
    for(ll i =2;i<=Min;i++){
        f*=i;
    }

    
    cout << f << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}