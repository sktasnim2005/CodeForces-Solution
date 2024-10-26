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
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int minRemovals = n; // Initialize with the total number of elements

        for (int i = 0; i < n; ++i) {
            int removals = i; // Elements before index i
            for (int j = i + 1; j < n; ++j) {
                if (a[j] > a[i]) {
                    removals++;
                }
            }
            minRemovals = min(minRemovals, removals);
        }

        cout << minRemovals << endl;
    }

    return 0;
}
