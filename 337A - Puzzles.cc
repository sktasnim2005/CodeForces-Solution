#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

     int min_diff = 1e9;
     
    for (int i = 0; i < m - n + 1; i++) {
        int current_diff = a[i + n - 1] - a[i];
        if (current_diff < min_diff) {
            min_diff = current_diff;
        }
    }

    cout << min_diff << endl;
    return 0;
}
