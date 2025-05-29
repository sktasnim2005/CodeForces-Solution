#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n;
    cin >> n;

    vector<ii> a(n);

    for (ii i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ii> lis;
    for (ii height : a) {
        auto it = upper_bound(lis.begin(), lis.end(), height);
        if (it == lis.end()) {
            lis.push_back(height);
        } 
        else {
            *it = height;
        }
    }
    cout << n - (int)lis.size() << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
