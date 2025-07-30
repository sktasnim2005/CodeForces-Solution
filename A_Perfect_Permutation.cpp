#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    if (n % 2 != 0) {
        cout << -1 << endl;
        return;
    }

    for (ii i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }
    cout << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}