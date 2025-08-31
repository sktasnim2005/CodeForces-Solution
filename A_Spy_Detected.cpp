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

    vector<ii>a(n);

    for(ii i=0;i<n;i++){
        cin >> a[i];
    }


    if(a[0] != a[1] && a[0]!= a[2]){
        cout << 1 << endl;
        return;
    }


    ii x = a[0];
    for(ii i=0;i<n;i++){
        if(a[i] != x){
            cout << i+1 << endl;
            return;
        }
    }



}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
