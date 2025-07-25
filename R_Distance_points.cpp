#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;

    dd d = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));

    cout <<  fixed << setprecision(9) << d << endl;



      
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}