#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    ii grain_max = n*(a + b);
    ii grain_min = n*(a - b);
    ii pack_max = c + d;
    ii pack_min = c - d;


    cout << ((grain_max>= pack_min && grain_min<=pack_max )? "Yes" :"No")  << endl;    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}