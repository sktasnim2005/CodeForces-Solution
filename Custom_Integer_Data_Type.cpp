#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        __int128 x; // use __int128 for large values up to 10^63
        int n;
        string sx;
        cin >> sx >> n;

        // Convert string to __int128
        bool is_negative = false;
        int i = 0;
        if (sx[0] == '-') {
            is_negative = true;
            i = 1;
        }

        x = 0;
        for (; i < sx.size(); i++) {
            x = x * 10 + (sx[i] - '0');
        }
        if (is_negative) x = -x;

        // Apply n-bit mask
        __int128 mask = (__int128(1) << n) - 1;
        __int128 val = x & mask;

        // If sign bit is set, it's negative
        if ((val >> (n - 1)) & 1) {
            val -= (__int128(1) << n); // Two's complement for negative
        }

        // Output __int128
        if (val < 0) {
            cout << "-";
            val = -val;
        }

        string res;
        do {
            res += char('0' + val % 10);
            val /= 10;
        } while (val > 0);
        reverse(res.begin(), res.end());
        cout << res << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
