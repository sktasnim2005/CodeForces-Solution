#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

bb OK(ii x, ii y){
    ii miN = min(x,y);
    ii Max = max(x,y);

    ii r = ((Max +1)/2 ) - 1 ;

    if(miN >= r) return true;

    return false;

}



void solve() {
    ii a,b,c,d;
    cin >> a >> b >> c >> d;

    ii secondR = c-a, secondK = d-b;

    cout << (OK(a,b) && OK(secondR,secondK) ? "YES" :"NO" )<< endl;
       
    

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
