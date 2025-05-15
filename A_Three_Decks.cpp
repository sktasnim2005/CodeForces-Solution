#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin >> a >> b >> c;  

    int x = a+b+c;

    if(x%3 != 0){
        cout << "NO" <<endl;
        return;
    }
    
    cout << (b > x/3 ? "NO" : "YES") << endl;
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