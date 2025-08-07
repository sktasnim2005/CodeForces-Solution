#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n,m;
    cin >> n >> m;

    if(n==1 && m==1){
        cout << 0 << endl;
        return;
    }


    cout << (n==1 || m==1 ? 1:2) << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
