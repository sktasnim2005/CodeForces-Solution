#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string

void solve() {
    ss s;
    cin >> s;

    sort(s.begin(),s.end());

    ss extra_S= s;

    reverse(extra_S.begin(),extra_S.end());

    cout<<s<<extra_S<<endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
