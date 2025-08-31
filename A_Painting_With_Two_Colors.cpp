#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n,a,b;
    cin >> n >> a >> b;


    cout << (n+1 <= a+b || abs(a-b) <=1 ?  "YES":"NO") << endl;
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
