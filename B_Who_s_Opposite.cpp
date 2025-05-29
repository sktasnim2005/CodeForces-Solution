#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii a,b,c;
    cin >> a >> b >> c;

    ii n = abs(a-b) * 2;

    if(max({a,b,c}) > n){
        cout << -1 << endl;
        return;
    }

    ii opposite_person = c+n/2;
    if(opposite_person > n) opposite_person-=n;
    
    cout << opposite_person << endl;

      
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
