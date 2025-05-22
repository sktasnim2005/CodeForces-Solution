#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    long long sumTsondu = 0, sumTenzing = 0;
    
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sumTsondu += a;
    }

    for (int i = 0; i < m; ++i) {
        int b;
        cin >> b;
        sumTenzing += b;
    }

    if (sumTsondu > sumTenzing){
        cout << "Tsondu" << endl;
    }
    else if (sumTenzing > sumTsondu){
        cout << "Tenzing" << endl;
    }
    else{
        cout << "Draw" << endl;
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