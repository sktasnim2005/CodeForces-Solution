#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll a,b,n,m;
    cin >> a >> b >> n >> m;

    ll k = n / (m+1); 
   
    ll remaining = n - k * (m+1);

    ll cost = k*min(a*m, b*(m+1)) + remaining *min(a,b);


    cout << cost << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
