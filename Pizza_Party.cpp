#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii x,y;
    cin >> x >> y;

    ii boy = x+1;
    ii slice = boy * 4 + y*3;
    cout << ceil((dd)slice/8) << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t;cin >> t;while (t--) 
    solve();
    return 0;
}
