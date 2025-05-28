#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    int x= min(m,r);
    cout << x-m << " " << x << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;while (t--)
     solve();
    return 0;
}
