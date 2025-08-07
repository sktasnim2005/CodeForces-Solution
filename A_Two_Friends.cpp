#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n;
    cin >> n;

    vector<ii> a(n+1);

    for(ii i=1;i<=n;i++){
        cin >> a[i];
    }

    for(ii i=1;i<=n;i++){
        ii j = a[i];
        if(a[j]==i){
            cout << 2 << endl;
            return;
        }
    }


    cout << 3 << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
