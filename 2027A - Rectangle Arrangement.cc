#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
        }

        int max_w = 0, max_h = 0;

        for (int i = 0; i < n; i++) {
            max_w = max(max_w, a[i].first);
            max_h = max(max_h, a[i].second);
        }

        int x = 2 * (max_w + max_h);
        cout << x << endl;
    }
    return 0;
}
