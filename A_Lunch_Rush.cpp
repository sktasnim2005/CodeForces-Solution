#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n,k;
    cin >> n >> k;

    ii max_Joy = INT_MIN;

    while (n--){
        ii fi,ti;
        cin >> fi >> ti;

        ii joy = (ti > k) ? fi- (ti-k) : fi;
        max_Joy = max(max_Joy,joy);

    }
    
    cout << max_Joy << endl;

    
   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}