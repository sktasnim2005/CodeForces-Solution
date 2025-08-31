#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ii n,m;
    cin >> n >> m;

    vector<array<array<ii,2>,2>> a(n);

    for(ii i=0;i<n;i++){
        for(ii row=0;row<2;row++){
            cin >> a[i][row][0] >> a[i][row][1];
        }
    }

    if(m%2 == 1){
        cout << "NO" << endl;
        return;
    }

    bb can = false;

    for(ii i=0;i<n;i++){
        if (a[i][0][1] == a[i][1][0]){
            can = true;
        }
    }


    cout << (can ? "YES" : "NO") << endl;

   
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
