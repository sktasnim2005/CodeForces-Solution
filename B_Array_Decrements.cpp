#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    cin >> n;

    vector<ii> a(n), b(n);

    for (ii i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ii i = 0; i < n; i++) {
        cin >> b[i];
    }

    bool can = true;
    int diff_ab = 0;


    for (ii i = 0; i < n; i++) {
        diff_ab = max(a[i] - b[i], diff_ab);
    }
    
    for (ii i = 0; i < n; i++) {
        if (b[i] != 0 && (a[i] - b[i]) < diff_ab) {
            can = false;
            break;
        }
    }

    cout << (can ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
