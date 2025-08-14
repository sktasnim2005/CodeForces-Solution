#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    
    ii n,k1,k2;
    cin >> n >> k1 >> k2;

    vector<ii> a(k1),b(k2);

    for(ii i=0;i<k1;i++){
        cin >> a[i];
    }
    for(ii i=0;i<k2;i++){
        cin >> b[i];
    }

    ii max_A = *max_element(a.begin(),a.end());
    ii max_B = *max_element(b.begin(),b.end());

    cout << (max_A > max_B ? "YES" : "NO") << endl;   

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
