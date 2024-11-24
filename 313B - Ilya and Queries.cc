#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    vector<int> prefix(n);
    prefix[0]=0;
    // Precompute the prefix array
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i - 1];
        if (s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }
    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        // Adjust for 1-based indexing
        l--;
        r--;
        cout << prefix[r] - prefix[l] << endl;
    }

    return 0;
}
