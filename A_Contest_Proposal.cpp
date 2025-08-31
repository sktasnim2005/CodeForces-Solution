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

    vector<ii> a(n),b(n);

    for(auto& x : a) cin >> x;
    for(auto& x : b) cin >> x;
    
    ii ans =0;
    for(ii i=0;i<n;i++){
        if(a[i-ans]>b[i]){
            ans++;
        }
    }

    cout << ans << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
