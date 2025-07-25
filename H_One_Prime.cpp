#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ll n;
    cin >> n;

    bool can = false;
    for(ii i=2;i<n;i++){
        if(n%i==0) {
            can = true;
            break;
        }
    }
    cout << (can? "NO" : "YES") << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
  //  int t;cin >> t;while (t--) 
    solve();
    return 0;
}
