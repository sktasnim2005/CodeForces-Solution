#include <bits/stdc++.h>
using namespace std;


void solve() {
    int x, y, n;
        cin >> x >> y >> n;

        vector<int> a(n);
        a[n - 1] = y;
        int curr = y;

        for (int i = 1; i < n; ++i) {
            curr -= i;
            a[n - 1 - i] = curr;
        }

        if (a[0] != x) {
            cout << -1 << '\n';
        } else {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << '\n';
        }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;while(t--)
       solve();
    return 0;
}
