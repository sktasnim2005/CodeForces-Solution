#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {
    ii n;
    cin >> n;
    
    vector<ii>a(n), b(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }
    for(ii i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    bool can = true;
    
    for(ii i=0;i<n;i++){
        if((b[i]!=a[i]) && (b[i]!=a[i]+1)){
            can = false;
            break;
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

