#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,ans=0;
        cin >> n;
        vector<int> a(n);
        vector<int> freq(n + 1, 0) ;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 1; i <= n; ++i) {
            if (freq[i] > 1) {
                ans += freq[i] / 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
