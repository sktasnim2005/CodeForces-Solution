#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ll n;
    ss s;
    cin >> n >> s;

    if(s=="00" || s=="11"){
        cout << "NO" << endl;
        return;
    }


    cout << (n<=2 ?  "YES":"NO") << endl;
    
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
