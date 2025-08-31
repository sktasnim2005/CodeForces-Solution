#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ll a,b,n;
    cin >> a >> b >> n;

    
    if(n%3==0) cout << a << endl;
    else if(n%3==1) cout << b << endl;
    else cout <<( a^b )<< endl;
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
