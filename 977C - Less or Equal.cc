#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (k == 0) {
        if (a[0] > 1) {
            cout << 1 << endl;  // Return 1 if it's less than the smallest element
        }
         else {
            cout << -1 << endl;
        }
    }
    else if (k > 0 && (k == n || a[k] != a[k-1])) {
        cout << a[k-1] << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}
