#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ii int
#define ss string
#define dd double
#define bb bool

void solve() {
    ii n,k;
    
    cin >> n >> k ;

    if(n==1){
        cout << 0 << endl;
        return;
    }
   

    ii need = n-1;
    ii add = k-1; 

    cout << (need+ add -1)/ add << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t; while (t--) 
    solve();
    return 0;
}
