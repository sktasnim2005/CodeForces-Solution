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

        vector<vector<int>> arr(n, vector<int>(n));
        vector<int> d(2 * n - 1, INT_MAX);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                d[i - j + n - 1] = min(d[i - j + n - 1], arr[i][j]);
            }
        }

        int x = 0;
        for (int i = 0; i < 2 * n - 1; ++i) {
            if (d[i] < 0) {
                x += abs(d[i]);
            }
        }

        cout << x << endl;
    }

    return 0;
}
