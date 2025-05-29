#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n,k;
    cin >> n >> k;

    vector<ss> a(n);

    for (ii i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ii i = 0; i < n; i+=k) { 
        for (ii j = 0; j < n; j+=k) {
            cout<<a[i][j];
        }
        cout<<endl;        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
