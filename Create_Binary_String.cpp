#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double


void solve() {    
    ii n,a,b,c,d;
    cin >> n >> a >> b >> c >> d;

    ii maxCoin =0;
    ii count0=0, count1=0;

    for(ii i=0;i<=n;i++){
        ii count0 = i;
        ii count1 = n - i;

        ii val_1 = a*count0 + b*count1 + c*count0*count1;
        ii val_2 = a*count0 + b*count1 + d*count0*count1;
        
        
        maxCoin=max({maxCoin,val_1,val_2});
    }


    cout << maxCoin << endl;

    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin >> t;while (t--) 
    solve();
    return 0;
}
