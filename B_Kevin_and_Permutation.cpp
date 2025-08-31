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

    ii mid = n/2 +1;
    ii start = 1;

    while(mid <=n || start <= n/2 ){
        if(mid <= n) cout << mid++ << " ";
        if(start <=n/2) cout << start++ << " ";
    }

    cout << endl; 


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
