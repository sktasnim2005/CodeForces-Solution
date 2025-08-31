#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    
    ll n,a,b,c;
    cin >> n >> a >> b >> c;

    if(n==1){
        cout << 0 << endl;
        return;
    }


    ll ans = 0;
    if(a<=b){
        ans = a + (n-2)*min(a,c);
    }
    else{
        ans = b + (n-2)*min(b,c);
    }
    
    cout << ans << endl;
       


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--) 
    solve();
    return 0;
}
