#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool ans = true;
        for (int i = 1; i < n; i++) {
            int x = abs(a[i] - a[i - 1]);
            if (x != 5 && x != 7) {
                ans = false;
                break;
            }
        }

        if (ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
