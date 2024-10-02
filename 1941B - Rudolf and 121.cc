#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i] > 0 && a[i - 1] > 0 && a[i + 1] > 0) {
                long long min_val = min({a[i] / 2, a[i - 1], a[i + 1]});
                a[i] -= 2 * min_val;
                a[i - 1] -= min_val;
                a[i + 1] -= min_val;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (a[i] != 0) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
