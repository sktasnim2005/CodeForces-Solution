#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string


void solve() {
    ii n,m;
    cin >> n >> m;

    vector<ss>a(n);
    for(ii i=0;i<n;i++){
        cin>>a[i];
    }
    
    ii ans = 0;
    for(ii i=0;i<n-1;i++){
        for(ii j=0;j<m-1;j++){
            ss s= "";
            s += a[i][j];
            s += a[i][j+1];
            s += a[i+1][j];
            s += a[i+1][j+1];
            
            sort(s.begin(),s.end());
            if(s=="acef"){
                ans++;
            }
        }
    }

    cout << ans << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t;cin >> t;while (t--) 
    solve();
    return 0;
}
