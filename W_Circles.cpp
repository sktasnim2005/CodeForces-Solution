#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ll x1,y1,x2,y2,x3,y3,x4,y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    dd center_x1 = (x1+x2)/2.0;
    dd center_y1 = (y1+y2)/2.0;
    dd center_x2 = (x3+x4)/2.0;
    dd center_y2 = (y3+y4)/2.0;

    dd radius1 = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) / 2.0;
    dd radius2 = sqrt((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)) / 2.0;

    dd d = sqrt((center_x1 - center_x2)*(center_x1 - center_x2) + (center_y1 - center_y2)*(center_y1 - center_y2));


    cout << (d<= radius1+radius2 ? "YES" : "NO") << endl;

}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}