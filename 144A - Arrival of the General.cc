#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_v = 0, min_v = 101, max_i, min_i;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > max_v) {
            max_v = a[i];
            max_i = i;
        }
        if (a[i] <= min_v) {
            min_v = a[i];
            min_i = i;
        }
    }

    int moves = max_i + (n - 1 - min_i);
    if (max_i > min_i) {
        moves--; // Adjust for overlap
    }

    cout << moves << endl;

    return 0;
}
