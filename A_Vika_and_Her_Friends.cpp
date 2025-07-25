#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() { 
    ii n,m,k;  
    cin >> n >> m >> k;

    ii x,y;
    cin >> x >> y;

    bool can_escape = true;
    for (ii i = 0; i < k; i++) {
        ii xi,yi;
        cin >> xi >> yi;

        if (((x+y)%2) == ((xi + yi)%2)) {
            can_escape = false;
        }
        }
    cout << (can_escape ? "YES" : "NO") << endl;

        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--)
    solve();
    return 0;
}
