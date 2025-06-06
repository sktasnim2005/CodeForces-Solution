#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    dd x,y;
    cin >> x >> y;

    cout << "floor " << x << " / " << y << " = " << floor(x/y) << endl;
    cout << "ceil " << x << " / " << y << " = " << ceil(x/y) << endl;
    cout << "round " << x << " / " << y << " = " << round(x/y) << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
