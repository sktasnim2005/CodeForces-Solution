#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    bool liar = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if (sum != n - 1) liar = true;

    for (int i = 1; i < n; i++) {
        if (a[i-1] + a[i] == 0) {
            liar = true;
            break;
        }
    }

    cout << (liar ? "YES\n" : "NO\n");
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; 
    while (t--) solve();
    return 0;
}
