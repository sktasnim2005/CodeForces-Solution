#include <bits/stdc++.h>
using namespace std;


void solve() {
    long long n;
        cin >> n;
        long long ans = 1;
        while (ans * 2 <= n) {
            ans *= 2;
        }
        cout << ans <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>>t;
    while(t--)
       solve();
    return 0;
}
