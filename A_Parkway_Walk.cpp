#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    long long sum = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
    }

    if (sum-m> 0 ){
        cout << sum-m << endl;
    } 
    else {
        cout << "0"<<endl;
    }
   
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