#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ii n,k;
    cin >> n >> k;
    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin>>a[i];
    }

    bool has_one = false;
    for (ii i = 0; i < n; ++i) {
        if (a[i] == 1) {
            has_one = true;
            break;
        }
    }

    if (has_one) cout << "YES\n";
    else cout << "NO\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}