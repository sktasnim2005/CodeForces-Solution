#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<long long> sum(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        long long max_score = 0;

        for(int i = n - 1; i >= 0; i--) {
            sum[i] = a[i];
            if(i + a[i] < n) {
                sum[i] += sum[i + a[i]];
            }
            max_score = max(max_score, sum[i]);
        }

        cout << max_score << endl;
    }

    return 0;
}
