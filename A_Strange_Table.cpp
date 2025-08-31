#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, x;
    cin >> n >> m >> x;

    // Step 1: Column numbering থেকে row, column বের করা
    long long row = (x - 1) % n + 1;   // Row index
    long long col = (x - 1) / n + 1;   // Column index

    // Step 2: Row numbering এ cell number বের করা
    long long ans = (row - 1) * m + col;

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
