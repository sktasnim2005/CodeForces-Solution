#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;++i) cin >> a[i];
        vector<int> cnt(n+1, 0); // ai in [1..n]
        long long ans = 0;
        for(int x : a) {
            if (x <= n) {           // constraint guarantees this, kept for clarity
                ++cnt[x];
                if (cnt[x] == x) { // we have x occurrences -> form a block
                    ans += x;
                    cnt[x] = 0;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
