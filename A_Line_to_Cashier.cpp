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

    ii min_time = INT_MAX;

    for(ii i=0;i<n;i++){
        ii total=0;
        for(ii j=0;j< a[i];j++){
            ii m;
            cin >> m;
            total += m*5 + 15;
        }
        min_time = min(min_time, total);
    }


    cout << min_time << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
