#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n,x1,y1,x2,y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    ll x = min({x1,y1,n+1 -x1, n+1-y1});
    ll y = min({x2,y2,n+1 -x2, n+1-y2});
    

    cout << abs(x-y) << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
