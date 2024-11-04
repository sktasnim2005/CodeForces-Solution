#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        set<int> x;
        for (int i = 0; i + 3 < s.length(); ++i) {
            if (s.substr(i, 4) == "1100") {
                x.insert(i);
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            --i;
            s[i] = v + '0';

            for (int j = max(0, i - 3); j <= min((int)s.length() - 4, i); ++j) {
                if (s.substr(j, 4) == "1100") {
                    x.insert(j);
                }
                 else {
                    x.erase(j);
                }
            }

            if (x.empty()) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
