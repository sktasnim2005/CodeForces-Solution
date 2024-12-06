#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int original_ones = count(a.begin(), a.end(), 1);

    if (original_ones == n) {
        cout << n - 1 << endl;
        return 0;
    }

    int max_diff = INT_MIN;
    int current_diff = 0;

    for (int i = 0; i < n; i++) {
        int value = (a[i] == 1) ? -1 : 1;
        current_diff = max(value, current_diff + value);
        max_diff = max(max_diff, current_diff);
    }

    cout << original_ones + max_diff << endl;

    return 0;
}
