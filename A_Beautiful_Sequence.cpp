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

    vector<ii> a(n+1);

    for(ii i=1;i<=n;i++){
        cin >> a[i];
    }

    for(ii i=1;i<=n;i++){
        if(a[i]<= i){ 
            cout << "YES" << endl;
            return;
        }
    }


    cout << "NO" << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
