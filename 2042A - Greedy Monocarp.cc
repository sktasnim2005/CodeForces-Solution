#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());

        int total = 0,x=1e7;
        for (int i = 0; i < n; i++) {
            total += a[i];
            if (total > k) {
                break;
            }
            x=min(x,k-total);
        }
        cout << x << endl;
        }
    return 0;
}
