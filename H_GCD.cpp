#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

ll GCD(ll x, ll y){
return __gcd(x,y);
}

ll LCM(ll x, ll y){
    return (x/GCD(x,y))*y;
}

void solve() {
    ll a,b;
    cin >> a >> b;

    ll g = GCD(a,b);
    ll l = LCM(a,b);



    cout << g << " " << l << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}