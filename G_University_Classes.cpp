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

    vector<ii> a(7,0);

    for(ii i=0;i<n;i++){
        ss s;
        cin >> s;
        for(ii j=0;j<7;j++){
            if(s[j]=='1'){
                a[j]++;
            }
        }
    }

    ii ans = *max_element(a.begin(),a.end());

    cout << ans << endl;       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
