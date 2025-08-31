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

    vector<vector<ii>> a(n, vector<ii>(n));

    vector<ii> ans;

    for(ii i=0;i<n;i++){
        for(ii j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    for(ii i=0;i<n;i++){
        bb can = true;
        for(ii j=0;j<n;j++){
            cin >> a[i][j];
            if(a[i][j]==1 || a[i][j]==3){
                can = false;
                break;
            }
        }
        if(can) ans.push_back(i+1);
    }

    cout << ans.size() << endl;
    for(auto x : ans){
        cout << x << " ";
    }
    cout << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
   // int t; cin >> t; while (t--) 
    solve();
    return 0;
}
