#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;


    ii AB = abs(x1 - x2) + abs(y1 - y2);
    ii AC = abs(x1 - x3) + abs(y1 - y3);
    ii BC = abs(x2 - x3) + abs(y2 - y3);

    ii common_Way = (AB+AC - BC)/2;


    cout << common_Way + 1 << endl;
    
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}