#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii n;
    cin >> n;

    vector<ii> a(n);
    for(auto& x : a) cin >> x;

    ii count1 = count(a.begin(),a.end(), 1);
    ii count2 = count(a.begin(),a.end(), 2);
    ii count3 = count(a.begin(),a.end(), 3);

    ii ans = max({count1,count2,count3});

    cout << n - ans << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
