#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;

    ll x = a+b+c;
    ll y = 2*a + 2*b;

    ll d1 = 2*a + 2*c;
    ll d2 = 2*b + 2*c;



    cout << min({x,y,d1,d2}) << endl;
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
