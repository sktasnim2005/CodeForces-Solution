#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double

void solve() {   
    ii n;
    cin >> n;

    if(n>=1)  cout << 0 << " ";
    if(n>=2)  cout << 1  << " ";
    
    ll a=0,b=1;

    for(ii i=3;i<=n;i++){
        ll c = a+b;
        cout << c << " ";
        a=b;
        b=c;
    }
    cout << endl;
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    //int t; cin >> t; while (t--)
    solve();
    return 0;
}
