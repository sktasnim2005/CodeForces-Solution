#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long max_v = -1e9, sum = 0, count = 0;

        for (int i = 0; i < n; i++) {
            sum += a[i];
            max_v = max(max_v, a[i]);
            if (sum - max_v == max_v) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}
