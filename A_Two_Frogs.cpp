#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,a,b;
   
    cin >>n >> a >> b ;  

    int x = abs(a-b);
    
    cout<< (x%2 == 0 ? "YES":"NO") <<endl;
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}