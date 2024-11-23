#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int min_sum = INT_MAX;
    int min_index = 0;
    int current_sum = 0;

    // Calculate the sum of the first k planks
    for (int i = 0; i < k; ++i) {
        current_sum += a[i];
    }

    min_sum = current_sum;

    // Sliding window to find the minimum sum of k consecutive planks
    for (int i = 1; i <= n - k; ++i) {
        current_sum = current_sum - a[i - 1] + a[i + k - 1];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i;
        }
    }

    // Output the starting index (1-based index)
    cout << min_index + 1 << endl;

    return 0;
}
